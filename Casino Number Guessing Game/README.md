# Casino Number Guessing Game

The Casino Number Guessing Game is a simple C++ program where the player tries to guess a randomly generated number within a given range. The player has a limited number of attempts, and after each attempt, the casino provides hints to help the player narrow down the possible numbers.

## Getting Started

To play the Casino Number Guessing Game, you need a C++ compiler that supports C++11 or later. Follow the steps below to get started:

1. Clone the repository or download the source code from [GitHub](https://github.com/AmrSayed0/casino-number-guessing-game).

2. Compile the C++ source code using a C++ compiler:

   ```bash
   g++ casino_number_guessing_game.cpp -o casino_number_guessing_game
   ```

3. Run the compiled executable:

   ```bash
   ./casino_number_guessing_game
   ```

## How to Play

1. The program will generate a random number between 1 and 100 (inclusive).

2. You will be given a limited number of attempts (7 in this version) to guess the correct number.

3. Enter your guess after each prompt: "Enter your guess:"

4. The casino will provide hints after each incorrect guess to help you narrow down the range:

   - If your guess is lower than the secret number, you will be informed to try a higher number.
   - If your guess is higher than the secret number, you will be informed to try a lower number.

5. If you guess the correct number within the given attempts, you win the game, and the program will display "Congratulations! You guessed the correct number."

6. If you exhaust all attempts without guessing the correct number, you lose the game, and the program will display "Sorry, you have used all your attempts. The correct number was: [secret number]."

## Example Gameplay

```
Welcome to the Casino Number Guessing Game!
Guess a number between 1 and 100.
Attempts left: 7
Enter your guess: 50
Try a lower number.
Attempts left: 6
Enter your guess: 25
Try a lower number.
Attempts left: 5
Enter your guess: 10
Try a higher number.
Attempts left: 4
Enter your guess: 15
Try a higher number.
Attempts left: 3
Enter your guess: 18
Congratulations! You guessed the correct number: 18
```
