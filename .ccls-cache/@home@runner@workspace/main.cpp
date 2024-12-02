#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string townName, fileName;

    // Ask for town name and file name
    cout << "Enter the name of the town: ";
    getline(cin, townName);
    cout << "Enter the name of the data file: ";
    cin >> fileName;

    // Open the file
    ifstream inputFile(fileName);
    if (!inputFile) {
        cerr << "Error: Could not open file " << fileName << endl;
        return 1;
    }

    // Display the header
    cout << "\n" << townName << " Population Growth" << endl;
    cout << "(each * represents 1,000 people)\n\n";

    // Read data from file and display the bar chart
    int year, population;
    while (inputFile >> year >> population) {
        cout << year << " ";
        for (int i = 0; i < population / 1000; ++i) {
            cout << "*";
        }
        cout << endl;
    }

    // Close the file
    inputFile.close();

    return 0;
}
