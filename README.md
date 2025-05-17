# Tic-Tac-Toe

# 🕹️ Tic Tac Toe - Console Based Game in C

This is a simple **console-based Tic Tac Toe game** implemented in C for two players. It includes a user-friendly interface, instructions, and winner detection logic. Ideal for beginners who want to understand basic C programming, arrays, and user input handling.

## 📌 Features

* Two-player turn-based gameplay
* Dynamic game board display
* Input validation to prevent repeated moves
* Win detection (horizontal, vertical, diagonal)
* Option to replay after the game ends

## 🧠 How It Works

1. Players enter their names.
2. The game board (3x3) is displayed with numbers 1–9 representing cell positions.
3. Players take turns choosing a position:

   * Player 1 marks with **X**
   * Player 2 marks with **O**
4. After each move, the game checks for a winning condition.
5. If a player wins, a congratulatory message is displayed.
6. Optionally, the players can replay the game.

## 🚀 Getting Started

### Compile the Code

For **Linux/macOS**:

```bash
gcc tic_tac_toe.c -o tic_tac_toe
./tic_tac_toe
```

For **Windows** (with `gcc` from MinGW or similar):

```bash
gcc tic_tac_toe.c -o tic_tac_toe.exe
tic_tac_toe.exe
```


## 🧩 To-Do
* [ ] Implement `player2play()` for full gameplay
* [ ] Add input validation for already chosen cells
* [ ] Add draw condition
* [ ] Convert to single-player mode with AI (optional)

## 🧑‍💻 Author
**Shubhadeep Sarkar**
