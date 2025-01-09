# Guessing Game

**Created by:** The Young Programmer 🏅 aka NemoNet 🖥

## Overview
This is a simple guessing game where you have to guess a number generated randomly by the program. You have 5 attempts to get it right. After each wrong guess, the program will give you feedback if your guess is too high or too low.  
The game also provides a hint when you’re close to the correct number (within 10 units).

## Game Instructions
- The program generates a random number between 0 and 100.
- You have 5 attempts to guess the number.
- After each guess, the program will tell you whether your guess is too high or too low.
- If your guess is within 10 units of the correct answer, you'll get a hint.
- If you guess the number correctly, you win the game!

## Features
- Random number generation between 0 and 100.
- 5 attempts to guess the number.
- Feedback after each guess (low/high).
- Hint when you’re within 10 units of the correct number.
- Message when the game ends with either a win or loss.

## Code Explanation
- The number is generated randomly using `rand() % 101`.
- If the guess is within bounds (0-100), the game proceeds; otherwise, the user is prompted to enter a valid guess.
- After each incorrect guess, the game updates the bounds (low/high) based on the guess.
- If the guess is close (within 10 units), a hint is displayed.
- If the guess is correct, the game ends with a success message.

## How to Run
1. Copy the C++ code into a file, e.g., **guessing_game.cpp**.
2. Compile the code using a C++ compiler, e.g., `g++ guessing_game.cpp -o guessing_game`.
3. Run the game with `./guessing_game`.

## Contact
For more programming games and projects, feel free to reach out to NemoNet at [GitHub](https://github.com/The-Young-Programmer).
