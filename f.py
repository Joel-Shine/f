from rich.console import Console
from rich.table import Table
import os
import time

console = Console()

print("")

path = os.getcwd()
path = path.replace("\\", "/")

obj = os.scandir(path)

def convert_bytes(size_in_bytes):
    if size_in_bytes < 1024:
        return f"{size_in_bytes} bytes"
    elif size_in_bytes < 1024**2:
        size_kb = size_in_bytes / 1024
        return f"{size_kb:.2f} KB"
    elif size_in_bytes < 1024**3:
        size_mb = size_in_bytes / (1024**2)
        return f"{size_mb:.2f} MB"
    else:
        size_gb = size_in_bytes / (1024**3)
        return f"{size_gb:.2f} GB"

def link(uri, label=None):
    if label is None: 
        label = uri
    parameters = ''

    escape_mask = '\033]8;{};{}\033\\{}\033]8;;\033\\'

    return escape_mask.format(parameters, uri, label)

console.print("[bold cyan]\tDirectory[/bold cyan]: ", end="")
print(path+"\n")

table = Table(show_header=True, header_style="#00FFF5", box=None)
table.add_column("Last Modified", style="bold #EE4266")
table.add_column("Size", style="bold #FFD23F")
table.add_column("")
table.add_column("Name", style="bold #3BCEAC")

for entry in obj:
    if entry.is_dir() or entry.is_file():
        x = entry.name
        sm = x.lower()
        em = ""

        if sm.endswith(".java"):
            em = ""
        elif sm.endswith(".go"):
            em = ""
        elif sm.endswith(".rust"):
            em = ""
        elif sm.endswith(".ruby"):
            em = ""
        elif sm.endswith(".py"):
            em = ""
        elif sm.endswith(".css"):
            em = ""
        elif sm.endswith(".html"):
            em = ""
        elif sm.endswith(".cpp"):
            em = ""
        elif sm.endswith(".c"):
            em = ""
        elif sm.endswith(".csharp"):
            em = ""
        elif sm.endswith(".js"):
            em = "{"
        elif sm.endswith(".jsx"):
            em = "{"
        elif sm.endswith(".json"):
            em = "{"
        elif sm.endswith(".txt"):
            em = ""
        elif sm.endswith(".pdf"):
            em = ""
        elif sm.endswith(".jpg"):
            em = ""
        elif sm.endswith(".png"):
            em = ""
        elif sm.endswith(".jpeg"):
            em = ""
        elif sm.endswith(".gif"):
            em = ""
        elif sm.endswith(".ico"):
            em = ""
        elif sm.endswith(".svg"):
            em = ""
        elif sm.endswith(".webp"):
            em = ""
        elif sm.endswith(".tif"):
            em = ""
        elif sm.endswith(".tiff"):
            em = ""
        elif sm.endswith(".bmp"):
            em = ""
        elif sm.endswith(".psd"):
            em = ""
        elif sm.endswith(".eps"):
            em = ""
        elif sm.endswith(".mp3"):
            em = "🎵"
        elif sm.endswith(".mp4"):
            em = "🎥"
        elif sm.endswith(".zip"):
            em = ""
        elif sm.endswith(".exe"):
            em = "💻"
        elif sm.endswith(".dll"):
            em = "💻"
        elif sm.endswith(".bat"):
            em = "⚙️"
        elif sm.endswith(".sh"):
            em = "⚙️"
        elif sm.endswith(".sql"):
            em = ""
        elif sm.endswith(".db"):
            em = ""
        elif sm.endswith(".xml"):
            em = ""
        elif sm.endswith(".yml"):
            em = ""
        elif sm.endswith(".yaml"):
            em = ""
        elif sm.endswith(".md"):
            em = "󰍔"
        elif sm.endswith(".mdx"):
            em = "󰍔"
        elif sm.endswith(".mdwn"):
            em = "󰍔"
        elif sm.endswith(".mdown"):
            em = "󰍔"
        elif sm.endswith(".markdown"):
            em = "󰍔"
        elif sm.endswith(".mdown"):
            em = "󰍔"
        elif sm.endswith(".mkd"):
            em = "󰍔"
        elif sm.endswith(".mkdn"):
            em = "󰍔"
        elif sm.endswith(".mkdown"):
            em = "󰍔"
        elif sm.endswith(".ron"):
            em = "󰍔"
        elif sm.endswith(".Rmd"):
            em = "󰍔"
        elif sm.endswith(".Rmarkdown"):
            em = "󰍔"
        elif sm.endswith(".Rmdwn"):
            em = "󰍔"
        elif sm.endswith(".Rmdwnx"):
            em = "󰍔"
        elif sm.endswith(".Rmarkdownx"):
            em = "󰍔"
        elif sm.endswith(".Rmdx"):
            em = "󰍔"
        elif sm.endswith(".lnk"):
            em = "🔗"
        elif sm.endswith(".ini"):
            em = "🔗"
        elif os.path.isdir(path+"/"+x):
            em = "📁"
        else:
            em = "󰟢"

        date = entry.stat().st_mtime
        date = time.strftime("%b %d, %I:%M %p", time.localtime(date))

        size = int(entry.stat().st_size)
        size = convert_bytes(size)

        table.add_row("","","","")
        table.add_row(str(date), str(size), em, link(path+"/"+x, x))


console.print(table)
print("\n")