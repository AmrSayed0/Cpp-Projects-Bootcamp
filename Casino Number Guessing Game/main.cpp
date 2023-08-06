#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "Welcome to the Casino Number Guessing Game!" << endl;
    
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int maxAttempts = 7;
    int attempts = 0;
    int guess;

    cout << "Guess a number between 1 and 100." << endl;

    while (attempts < maxAttempts) {
        cout << "Attempts left: " << maxAttempts - attempts << endl;
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number: " << secretNumber << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Try a higher number." << endl;
        } else {
            cout << "Try a lower number." << endl;
        }

        attempts++;
    }

    if (attempts == maxAttempts) {
        cout << "Sorry, you have used all your attempts. The correct number was: " << secretNumber << endl;
    }

    return 0;
}
