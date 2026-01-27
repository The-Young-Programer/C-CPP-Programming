**tiny_editor** is a small terminal program written in C.  
It opens a text file in your terminal and lets you move around and search inside it.

Right now it is a **viewer**, not a full editor (it does not save changes).


## 1. Requirements

You need:

- Linux or WSL (Ubuntu is fine).
- `gcc` compiler.

On Ubuntu/WSL you can install tools with:

```bash
sudo apt update
sudo apt install build-essential
``` 
## 2. Setup

1. Create a folder and enter it:

   ```bash
   mkdir tiny_editor
   cd tiny_editor
   ```

2. Create the C file:

   ```bash
   nano tiny_editor.c
   ```

3. Paste your `tiny_editor.c` code into the file, then:

   - `Ctrl+O`, Enter to save
   - `Ctrl+X` to exit

4. Check the file is there:

   ```bash
   ls
   # you should see: tiny_editor.c
   ```

***

## 3. Compile

In the same folder:

```bash
gcc -Wall -Wextra -pedantic -std=c11 tiny_editor.c -o tiny_editor
``` 

If it works, you’ll see:

```bash
ls
# tiny_editor  tiny_editor.c
```

If you see an error like “tiny_editor.c: No such file or directory”, you are probably in the wrong folder or the filename is different. [log2base2](https://www.log2base2.com/C/basic/how-to-compile-the-c-program.html)


## 4. Run

To open a file (for example, the source file itself):

```bash
./tiny_editor tiny_editor.c
```

You will see the file content in a full‑screen view with `~` characters on empty lines.

If the program crashes and your terminal looks broken (no echo, weird behavior), run:

```bash
reset
``` 

***

## 5. Keys you can use

Inside the program:

- **Arrow Up/Down/Left/Right**  
  Move the cursor around the file.

- **Ctrl+F**  
  Search:
  - A prompt appears at the bottom: `Search: ...`
  - Type your search text and press Enter to jump to the first match.
  - Press Esc to cancel the search.

- **Ctrl+Q**  
  Quit the program and return to the normal terminal.

***

## 6. What to learn from this

This project is useful to learn:

- How to read single keypresses in C (using `read` and `termios`).
- How to draw a full screen “interface” using escape codes.
- How to store file lines in memory and display them. [viewsourcecode](https://viewsourcecode.org/snaptoken/kilo/)

Later you can extend it to:

- Insert/delete text.
- Save to a file.
- Add a status bar or syntax highlighting.