#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Input tinggi segitiga: ";
    cin >> height;

    for (int i = 1; i <= height; i++) {
        // Print leading spaces
        for (int j = i; j < height; j++) {
            cout << " ";
        }
        // Print asterisks
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
