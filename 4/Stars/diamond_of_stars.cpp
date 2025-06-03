#include <iostream>
using namespace std;

void printPattern(int n)
{
    // first part (upper triangle)
    for (int row = 0; row < n / 2 + 1; row++)
    {
        // spaces
        for (int col = 0; col < n / 2 - row; col++)
        {
            cout << " ";
        }
        // stars
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // second part (lower triangle)
    for (int row = 0; row < n / 2; row++)
    {
        // spaces
        for (int col = 0; col <= row; col++)
        {
            cout << " ";
        }
        // stars
        for (int col = 0; col < n - 2 * (row + 1); col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}