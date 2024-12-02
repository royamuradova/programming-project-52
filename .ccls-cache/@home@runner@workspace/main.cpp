#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int userGuess;
    int guessCount = 0;

    cout << "Welcome to the Random Number Guessing Game!" << endl;
    cout << "I have picked a number between 1 and 100. Try to guess it!" << endl;

    // Game loop
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        guessCount++;

        if (userGuess > randomNumber) {
            cout << "Too high, try again." << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low, try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number!" << endl;
            cout << "It took you " << guessCount << " guesses." << endl;
        }
    } while (userGuess != randomNumber);

    return 0;
}
