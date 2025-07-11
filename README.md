
# 🎵🔢 Multi-Feature CLI Application in C++

This is a **C++ Command-Line Interface (CLI)** application created for the Programming Fundamentals course. It includes several interactive features such as a music player, scientific calculator, piano simulator, and more all integrated into a single menu-driven program.

---

## 📦 Features

1. **🎶 Music Player**  
   - Choose happy or sad songs.
   - Plays `.wav` files using Windows `PlaySound`.

2. **🧮 Scientific Calculator**  
   - Operations include: square root, cube root, powers, trigonometric functions, round off, and natural log.

3. **🔁 Decimal to Binary Converter**  
   - Converts a decimal number into binary using a dynamic array.

4. **🔢 Counter Tool**  
   - Increments counter on key press. Reset or exit as needed.

5. **🎹 Piano Simulator**  
   - Keyboard-controlled piano with individual notes and full recorded songs using special keys.

6. **✖️ Multiplication Tables with Sound**  
   - Type a number to hear and see its multiplication table (1–10).

7. **🔠 Large ASCII Character Printer**  
   - Prints uppercase characters in large ASCII art style with sound.

---

## 🛠️ Requirements

- Windows OS
- C++ Compiler (`g++` or Visual Studio)
- Windows multimedia library (`winmm.lib`)
- Preloaded `/assets` folder containing required `.wav` files

---

## 🚀 How to Run

### 🔧 Compile the Program

```bash
g++ main.cpp -o cli_app -lwinmm
```

### ▶️ Execute

```bash
./cli_app
```

---

## 📁 Folder Structure

```
📦project-root
 ┣ 📂assets
 ┃ ┣ 📂songs
 ┃ ┃ ┣ 📂happy
 ┃ ┃ ┗ 📂sad
 ┃ ┣ 📂notes
 ┃ ┃ ┗ 📂recorded
 ┃ ┣ 📂tables
 ┃ ┗ 📂alphabets
 ┣ 📄main.cpp
 ┣ 📄printLargeCharacters.h
 ┗ 📄README.md
```


## 📜 License

Free to use for educational and academic purposes. Audio files are assumed to be used under fair use for learning.
