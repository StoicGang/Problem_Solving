#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    cout << "Enter n : ";
    cin >> n;
    // first half
    for (int row = 0; row < n; row++)
    {
        // stars print krlo bhai
        for (int col = 0; col <= row; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < 2 * (n - row - 1); col++)
        {
            cout << " ";
        }
        for (int col = 0; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // second half
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        // spaces krle
        for (int col = 0; col < 2 * (row); col++)
        {
            cout << " ";
        }
        // stars  krle
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}