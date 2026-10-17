# 🚀 Getting Started

### Prerequisites
* A POSIX-compliant operating system (macOS or Linux)
* `gcc` (GNU Compiler Collection)
* `gperf` (GNU Perfect Hash Function Generator)

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
   Compile with aggressive O3 optimization and silence legacy prototype warnings from Apple's older `gperf` tool:
   ```bash
   gcc -O3 -Wno-deprecated-non-prototype -o f f.c
   ```

4. **(Optional) Move to your PATH:**
   To use this command from anywhere on your system, move the executable to your local bin directory:
   ```bash
   sudo mv f /usr/local/bin/
   ```

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