# Tic Tac Toe with AI (Qt C++)

A simple and educational Tic Tac Toe game built using **Qt (C++)**, featuring two game modes:

- Player vs Player
- Player vs AI (using the Minimax algorithm with alpha-beta pruning)

---
## 📸 Screenshot


![Screenshot 1](https://github.com/user-attachments/assets/b7b59fc5-2ead-4ed3-9cff-9500d38fc963)

![Screenshot 2](https://github.com/user-attachments/assets/cb8a6bf6-18d8-4d26-9a79-9672c327a5ca)

![Screenshot 3](https://github.com/user-attachments/assets/3ce3890b-fa06-4c47-884b-adfe634417df)

## 🧠 Features

- ✅ GUI using Qt
- ✅ Two game modes: Player vs Player & Player vs AI
- ✅ Unbeatable AI using Minimax with alpha-beta pruning
- ✅ Basic win/draw detection
- ✅ Restart and Back buttons
- ✅ Simple and clean UI

---

## 🧠 How the AI Works (Why It's Unbeatable)

The AI uses the **Minimax algorithm with alpha-beta pruning**, a decision-making algorithm commonly used in turn-based games like Tic Tac Toe.

- The AI **simulates all possible moves** and their outcomes.
- It assigns a score to each game state:
  - `+10` if AI (O) wins
  - `-10` if player (X) wins
  - `0` if it’s a draw
- It chooses the move with the **maximum guaranteed score** (assuming the player plays optimally).
- **Alpha-beta pruning** helps optimize performance by cutting off unnecessary branches in the decision tree.

### 🎯 Why is it Unbeatable?

Because it always plays the **optimal move**, it:
- **Never makes a mistake**
- **Never loses**, and
- Will **win** if the player makes a single wrong move

This means **the best a human can do is draw**, unless they play perfectly.

---

## 🚀 Getting Started

### Prerequisites

- Qt 5 or Qt 6
- C++ compiler (GCC, MSVC, Clang)
- Qt Creator (recommended)

### Running the Project

1. Clone the repository:
   ```bash
       git clone https://github.com/Sc-Luka/Tic-Tac-Toe
