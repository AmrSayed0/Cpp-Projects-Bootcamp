#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum class Choice { ROCK, PAPER, SCISSORS };

Choice getPlayerChoice() {
    int choice;
    cout << "Enter your choice (0 - Rock, 1 - Paper, 2 - Scissors): ";
    cin >> choice;
    return static_cast<Choice>(choice);
}

Choice getComputerChoice() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int choice = rand() % 3;
    return static_cast<Choice>(choice);
}

void determineWinner(Choice playerChoice, Choice computerChoice) {
    cout << "Player chose ";
    switch (playerChoice) {
        case Choice::ROCK:
            cout << "Rock";
            break;
        case Choice::PAPER:
            cout << "Paper";
            break;
        case Choice::SCISSORS:
            cout << "Scissors";
            break;
    }

    cout << ". Computer chose ";
    switch (computerChoice) {
        case Choice::ROCK:
            cout << "Rock";
            break;
        case Choice::PAPER:
            cout << "Paper";
            break;
        case Choice::SCISSORS:
            cout << "Scissors";
            break;
    }

    cout << endl;

    if (playerChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if (
        (playerChoice == Choice::ROCK && computerChoice == Choice::SCISSORS) ||
        (playerChoice == Choice::PAPER && computerChoice == Choice::ROCK) ||
        (playerChoice == Choice::SCISSORS && computerChoice == Choice::PAPER)
    ) {
        cout << "Player wins!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}

int main() {
    cout << "Welcome to Rock Paper Scissors!" << endl;

    while (true) {
        Choice playerChoice = getPlayerChoice();
        Choice computerChoice = getComputerChoice();
        determineWinner(playerChoice, computerChoice);

        char playAgain;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            break;
        }

        cout << endl;
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}
