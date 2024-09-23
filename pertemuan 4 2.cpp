#include <iostream>
using namespace std;

int main()
{
    int bil;
    int sum = 0;
    cout << "Masukan bilangan positif: ";
    cin >> bil;
    while (bil >= 0)
    {
        sum += bil;
        cout << "Masukan bilangan positif: ";
        cin >> bil;
    }
    cout <<"/nTotal penjumlahan : " << sum << endl;
    return 0;
}
