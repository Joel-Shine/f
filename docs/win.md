# 🚀 Getting Started

### Prerequisites
Because this tool uses POSIX APIs (`dirent.h`), you need a compatible environment like **MSYS2** (MinGW-w64) or **WSL** (Windows Subsystem for Linux). 

If using MSYS2, install the compiler and gperf via the MSYS2 terminal:
`pacman -S mingw-w64-ucrt-x86_64-gcc gperf`

### Compilation & Installation

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/Joel-Shine/f](https://github.com/Joel-Shine/f)
   cd f
   ```

2. **Generate the Perfect Hash Table:**
   If you ever modify the icon mappings in `icons.gperf`, you need to regenerate the C header file. (If you just cloned this, it's already included, but here is the command):
   ```bash
   gperf -t --ignore-case -N lookup_icon icons.gperf > icon_lookup.h
   ```

3. **Compile the C Code:**
   ```bash
   gcc -O3 -o f.exe f.c
   ```

4. **(Optional) Move to your PATH:**
   Move f.exe to a directory that is included in your Windows Environment Variables PATH (e.g., C:\Program Files\MyCLI\) so you can run it from any Command Prompt or PowerShell window.
---

## 💻 Usage

Simply run the command in any directory:

```bash
./f
```
*(Or just `f` if you added it to your PATH).*

### Output Format
The tool outputs a dynamically spaced table displaying:
1. **Last Modified:** Formatted as `Mon DD, HH:MM AM/PM`
2. **Size:** Automatically scaled to `bytes`, `KB`, `MB`, or `GB`
3. **Icon:** Mapped perfectly to the file type
4. **Name:** Color-coded and clickable

---

## 🛠 Customization

Don't see your favorite language or file type? You don't need to write any C code to add it. 

1. Open `icons.gperf`.
2. Add your extension and the emoji/icon to the list before the final `%%`.
   ```c
   .ts, "📘"
   .rs, "🦀"
   ```
3. Run the `gperf` command from the installation steps to regenerate `icon_lookup.h`.
4. Recompile with `gcc`.