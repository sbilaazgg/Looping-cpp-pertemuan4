#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to display factors of a number
vector<int> factors(int num) {
    vector<int> fac;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            fac.push_back(i);
        }
    }
    return fac;
}

int main() {
    int limit;
    int oddSum = 0, evenSum = 0, primeSum = 0;

    cout << "Masukkan batas angka: ";
    cin >> limit;

    cout << "\nBilangan ganjil:\n";
    for (int i = 1; i <= limit; i += 2) {
        cout << i << " (factors: ";
        vector<int> fac = factors(i);
        for (int j = 0; j < fac.size(); ++j) {
            cout << fac[j] << (j < fac.size() - 1 ? ", " : "");
        }
        cout << ")\n";
        oddSum += i;
    }

    cout << "\nBilangan genap:\n";
    for (int i = 2; i <= limit; i += 2) {
        cout << i << " (factors: ";
        vector<int> fac = factors(i);
        for (int j = 0; j < fac.size(); ++j) {
            cout << fac[j] << (j < fac.size() - 1 ? ", " : "");
        }
        cout << ")\n";
        evenSum += i;
    }

    cout << "\nBilangan prima:\n";
    for (int i = 2; i <= limit; ++i) {
        if (isPrime(i)) {
            cout << i << " (factors: ";
            vector<int> fac = factors(i);
            for (int j = 0; j < fac.size(); ++j) {
                cout << fac[j] << (j < fac.size() - 1 ? ", " : "");
            }
            cout << ")\n";
            primeSum += i;
        }
    }

    cout << "\nJumlah bilangan ganjil: " << oddSum << endl;
    cout << "Jumlah bilangan genap: " << evenSum << endl;
    cout << "Jumlah bilangan prima: " << primeSum << endl;

    return 0;
}
