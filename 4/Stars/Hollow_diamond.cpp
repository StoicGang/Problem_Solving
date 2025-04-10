#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;

    // 1st half
    for (int row = 0; row < n; row++)
    {
        // Spaces print kr bhai
        for (int col = 0; col < (n - row - 1); col++)
        {
            cout << " ";
        }
        // stars print kr bhai
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col == 0 || col == 2 * row)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // 2nd half
    for (int i = 0; i < n; i++)
    {
        // spaces print kr bhai
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star print kr bhai
        for (int j = 0; j < (2 * n) - (i * 2) - 1; j++)
        {
            if (j == 0 || j == (2 * n) - (i * 2) - 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}