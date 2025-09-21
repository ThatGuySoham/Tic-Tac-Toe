# Tic-Tac-Toe game in C++

A simple, interactive **Tic-Tac-Toe** game built from scratch in C++.  
This console-based game allows **two players** to play against each other, with input validation, win detection, and draw conditions.

---

## 🥋 Features

- Two-player gameplay (no AI yet, fully player vs. player).  
- Input validation to prevent invalid moves or overwriting existing cells.  
- Detects all winning conditions:
  - Horizontal
  - Vertical
  - Diagonal  
- Detects draws when all cells are filled.  
- Displays a clean, easy-to-read game board after every move.  

---

## 🎮 How to Play

1. Clone or download the repository.
2. Compile the code using a C++ compiler:
   ```bash
   g++ tic_tac_toe.cpp -o tic_tac_toe
3. Run the compiled program:

  ``` 
  Copy code
  ./tic_tac_toe
  ```

4. Enter the names of both players when prompted.

5. Players take turns choosing a number corresponding to the board cell:

```
  1 | 2 | 3
 ___|___|___
  4 | 5 | 6
 ___|___|___
  7 | 8 | 9
```

The game announces the winner or a draw after the board is filled.

## 📖 Code Structure
player_names() → Handles input for player names.

grid() → Prints the current state of the game board.

checker() → Handles player moves, input validation, and updates the board.

WinCheck() → Checks for all winning conditions.

main() → Orchestrates the game loop and alternates turns between players.

## 💡 Potential Improvements
Add a scoreboard for multiple rounds.

Implement AI opponent for single-player mode.

Create a graphical user interface (GUI) using libraries like Qt, SDL, or a web version with JavaScript.

Highlight winning lines or cells for better visual feedback.

## 🛠️ Tech Stack
Language: C++

Platform: Console-based, cross-platform (works on Windows, macOS, Linux)

## 🏁 Getting Started

Simply clone the repository and compile with your favorite C++ compiler to start playing!

```
git clone <repository-url>
cd tic-tac-toe
g++ tic_tac_toe.cpp -o tic_tac_toe
./tic_tac_toe
```
