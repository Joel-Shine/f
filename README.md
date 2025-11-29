<h1 align="center"> f </h1>

## ✨ Overview
**`f`** is a command-line utility designed to replace the standard, monochromatic `ls` (Linux/macOS) or `dir` (Windows) commands with a beautiful, colorful, and interactive directory listing.

Tired of the basic text output? **`f`** takes your directory listing to the next level by adding:
* **Vibrant Colors** for file types and metadata.
* **Intuitive Icons** for nearly every common file extension and folder type.
* **Interactivity** where listed files and folders act as clickable links (in modern terminals).

The simplicity of the command—just the letter `f`—makes it easy to remember and fast to use, especially when added to your system's PATH.

---

## 💡 Motivation
While Unix-like systems have powerful, aesthetically pleasing tools like `lsd` and `exa`, Windows environments often lack a first-class, colorful, and feature-rich directory listing utility. **`f`** aims to fill this gap, providing Windows users with a visually enhanced and more functional way to navigate their filesystem directly from the terminal.

---

## 🖼️ Demo
See the difference for yourself!
![Demo for f](./pictures/image.png)

---

## 🚀 Key Features

### 🌈 Enhanced Visuals
* **Color-Coded Output:** Distinct colors are used for directories, executable files, archive files, text documents, and more, making it easy to parse information at a glance.
* **Icon Support:** Support for hundreds of file type icons, providing immediate visual context for what each entry is.

### 🖱️ Interactive Listing (Modern Terminals Only)
One of the most powerful features of **`f`** is its interactivity, which works best in modern terminal emulators like **Windows Terminal**, **VS Code's Integrated Terminal**, or equivalent cross-platform terminals.

* **File Execution:** Clicking on a file's name in the listing (e.g., a `.py`, `.exe`, or `.bat` file) will execute that file.
* **Directory Navigation:** Clicking on a folder name will open that folder in the file manager (or execute the relevant directory command, depending on implementation).

> **Note:** This clickable link functionality relies on specific escape sequences supported by modern terminal emulators and **will not work** in older environments like pure Command Prompt (`cmd.exe`) or basic PowerShell consoles.

### 💨 Command Simplicity
The entire tool is aliased to the single letter **`f`**, which is highly mnemonic (for 'File' or 'Find') and quick to type.
---

## 🤝 Contribution & Icon Expansion
The core mission of **`f`** is to provide comprehensive visual support. If you notice any missing file extensions or directory types that lack an appropriate icon:

1.  **Raise an Issue:** Open an issue with the subject "Missing Icon Request: {your icon}" and include the file extension and your preferred icon (if you know the appropriate Unicode character).
2.  **Open a Pull Request:** If you know how to implement the change, feel free to fork the repository and submit a Pull Request adding the new icon mapping!

We welcome contributions to expand the icon set, improve performance, and add more command-line flags.

---

## 📜 License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
