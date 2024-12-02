#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // File name
    const string fileName = "LineUp.txt";

    // Declare variables
    string name;
    string firstStudent, lastStudent;
    int studentCount = 0;

    // Open the file
    ifstream inputFile(fileName);

    // Check if the file opened successfully
    if (!inputFile) {
        cout << "Error: Unable to open file \"" << fileName << "\".\n";
        return 1; // Exit the program
    }

    // Read names from the file
    while (inputFile >> name) {
        studentCount++;

        // If this is the first name, initialize first and last students
        if (studentCount == 1) {
            firstStudent = name;
            lastStudent = name;
        } else {
            // Update the first student if the current name is alphabetically earlier
            if (name < firstStudent) {
                firstStudent = name;
            }
            // Update the last student if the current name is alphabetically later
            if (name > lastStudent) {
                lastStudent = name;
            }
        }
    }

    // Close the file
    inputFile.close();

    // Output results
    if (studentCount > 0) {
        cout << "Number of students: " << studentCount << endl;
        cout << "First student in line: " << firstStudent << endl;
        cout << "Last student in line: " << lastStudent << endl;
    } else {
        cout << "No names were found in the file.\n";
    }

    return 0;
}