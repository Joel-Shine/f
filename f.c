#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include <limits.h>

// Include the gperf generated perfect hash table
#include "icon_lookup.h"

#define COLOR_HEADER "\033[38;2;0;255;245m"
#define COLOR_DATE "\033[1;38;2;238;66;102m"
#define COLOR_SIZE "\033[1;38;2;255;210;63m"
#define COLOR_NAME "\033[1;38;2;59;206;172m"
#define COLOR_DIR_LABEL "\033[1;36m"
#define COLOR_RESET "\033[0m"

void convert_bytes(off_t size_in_bytes, char *buffer) {
    // (Keep the same convert_bytes logic here)
    if (size_in_bytes < 1024) {
        sprintf(buffer, "%lld bytes", (long long)size_in_bytes);
    } else if (size_in_bytes < 1024 * 1024) {
        sprintf(buffer, "%.2f KB", (double)size_in_bytes / 1024.0);
    } else if (size_in_bytes < 1024 * 1024 * 1024) {
        sprintf(buffer, "%.2f MB", (double)size_in_bytes / (1024.0 * 1024.0));
    } else {
        sprintf(buffer, "%.2f GB", (double)size_in_bytes / (1024.0 * 1024.0 * 1024.0));
    }
}

const char* get_icon(const char *filename, int is_dir) {
    // 1. Handle folders immediately
    if (is_dir) return "📁";
    
    // 2. Extract extension; return fallback if no extension exists
    const char *dot = strrchr(filename, '.');
    if (!dot) return "📄"; 

    // 3. O(1) Perfect Hash Lookup via gperf
    const struct IconMap *match = lookup_icon(dot, strlen(dot));
    if (match) {
        return match->icon;
    }
    
    // 4. Fallback for unmapped extensions
    return "📄";
}

int main() {
    char path[PATH_MAX];
    if (getcwd(path, sizeof(path)) == NULL) {
        perror("getcwd() error");
        return 1;
    }

    // Replace backslashes with forward slashes (if on Windows/MinGW)
    for (int i = 0; path[i]; i++) {
        if (path[i] == '\\') path[i] = '/';
    }

    printf("\n%s\tDirectory%s: %s\n\n", COLOR_DIR_LABEL, COLOR_RESET, path);

    // Table Header
    printf("%s%-20s %-15s %-3s %s%s\n", 
           COLOR_HEADER, "Last Modified", "Size", "", "Name", COLOR_RESET);

    DIR *d;
    struct dirent *dir;
    d = opendir(path);
    
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            // Skip . and ..
            if (strcmp(dir->d_name, ".") == 0 || strcmp(dir->d_name, "..") == 0) continue;

            char full_path[PATH_MAX];
            snprintf(full_path, sizeof(full_path), "%s/%s", path, dir->d_name);

            struct stat file_stat;
            if (stat(full_path, &file_stat) == -1) continue;

            int is_dir = S_ISDIR(file_stat.st_mode);
            
            // Format time
            char time_buf[64];
            struct tm *tm_info = localtime(&file_stat.st_mtime);
            strftime(time_buf, sizeof(time_buf), "%b %d, %I:%M %p", tm_info);

            // Format size
            char size_buf[64];
            convert_bytes(file_stat.st_size, size_buf);

            // Get icon
            const char *icon = get_icon(dir->d_name, is_dir);

            // Print empty row for spacing (matching your Python script)
            printf("\n");
            
            // Print formatted row with OSC 8 Hyperlink
            printf("%s%-20s%s %s%-15s%s %s \033]8;;file://%s\033\\%s%s%s\033]8;;\033\\\n", 
                   COLOR_DATE, time_buf, COLOR_RESET,
                   COLOR_SIZE, size_buf, COLOR_RESET,
                   icon,
                   full_path, COLOR_NAME, dir->d_name, COLOR_RESET);
        }
        closedir(d);
    }
    printf("\n");
    return 0;
}