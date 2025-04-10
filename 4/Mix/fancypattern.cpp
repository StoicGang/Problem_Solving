#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    // first half
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << row + 1;
            if (col < row)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    // seconf half
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << n - row;
            if (col != n - row - 1)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}