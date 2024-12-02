#include <iostream>
using namespace std;

int main() {
    // Pattern A
    cout << "Pattern A\n";
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "+";
        }
        cout << endl;
    }

    // Spacer between patterns
    cout << endl;

    // Pattern B
    cout << "Pattern B\n";
    for (int i = 10; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}
