#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int startingPopulation;
    double dailyIncreasePercentage;
    int numberOfDays;

    // Input validation for starting population
    do {
        cout << "Enter the starting number of organisms (must be at least 2): ";
        cin >> startingPopulation;
        if (startingPopulation < 2) {
            cout << "Invalid input. Starting population must be at least 2.\n";
        }
    } while (startingPopulation < 2);

    // Input validation for daily increase percentage
    do {
        cout << "Enter the average daily population increase (as a percentage, cannot be negative): ";
        cin >> dailyIncreasePercentage;
        if (dailyIncreasePercentage < 0) {
            cout << "Invalid input. Daily population increase percentage cannot be negative.\n";
        }
    } while (dailyIncreasePercentage < 0);

    // Input validation for number of days
    do {
        cout << "Enter the number of days they will multiply (must be at least 1): ";
        cin >> numberOfDays;
        if (numberOfDays < 1) {
            cout << "Invalid input. Number of days must be at least 1.\n";
        }
    } while (numberOfDays < 1);

    // Display the population for each day
    cout << "\nDay\tPopulation\n";
    cout << "-------------------\n";

    double population = startingPopulation;
    for (int day = 1; day <= numberOfDays; ++day) {
        cout << day << "\t" << population << endl;
        population += population * (dailyIncreasePercentage / 100.0); // Calculate new population
    }

    return 0;
}
