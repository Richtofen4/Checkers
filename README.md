# Checkers Game in C++ with Qt

## Description
This repository hosts a checkers game developed in C++ using the Qt framework. The implementation is not yet complete. The game features basic gameplay mechanics like pawn movement, capturing, and pawn promotion to queens.

## Current Implementation
- Movement of regular pawns for both black and white pieces.
- Detection of possible captures for pawns.
- Execution of pawn captures.
- Promotion of a pawn to a queen when it reaches the opposite end of the board.

## Pending Features
- Movement, detection, and capturing with queens for both colors are still under development.
- UI enhancements such as highlighting the selected piece and notifications for available captures are yet to be implemented.

## Classes Overview
- `MainWindow`: Sets up the main window and user interface, handling user interactions.
- `BoardGame`: Manages the game board logic and state, including setup and updates.
- `PawnPosition`: Keeps track of pawn positions on the board and manages updates on movements and captures.
- `SceneChange`: Detects mouse events on the QGraphicsScene to determine pawn selections and movements.
- `WhiteMove` and `BlackMove`: Contains the logic for moving the white and black pawns, respectively, including capturing mechanics.

## Project Structure
The project includes the following key files:
- Source files (`.cpp`): Contains the main game logic and user interaction handling.
- Header files (`.h`): Class definitions and function declarations.
- Qt Forms (`.ui`): Describes the graphical user interface of the game.
- Project file (`.pro`): Specifies how the app should be built using the Qt framework.

## Installation
To run the game, you must have Qt installed. Clone this repository, open the `checkers.pro` file with Qt Creator, build, and run the project.

## Disclaimer
This game is a work in progress, and as such, some features are incomplete and subject to change.
