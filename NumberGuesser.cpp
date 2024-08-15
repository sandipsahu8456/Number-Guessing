#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 10 + 1;
    int guess;
    int attempts = 5;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "You have " << attempts << " attempts to guess the number between 1 and 10." << endl;

    // Loop through 5 attempts
    for (int i = 0; i < attempts; ++i) {
        cout << "Attempt " << i + 1 << ": Enter your guess: ";
        cin >> guess;

        // Check if the guessed number is correct
        if (guess == randomNumber) {
            cout << "Congratulations! You guessed the correct number!" << endl;
            return 0;
        }
        // Give feedback if the guessed number is higher or lower
        else if (guess < randomNumber) {
            cout << "The number is higher than " << guess << "." << endl;
        } else {
            cout << "The number is lower than " << guess << "." << endl;
        }
    }

    // If the user fails to guess in 5 attempts
    cout << "Sorry! You've used all your attempts. The correct number was " << randomNumber << "." << endl;

    return 0;
}
