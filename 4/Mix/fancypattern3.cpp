#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    // first half
    int count = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << count;
            if (col < row)
            {
                cout << "*";
            }
            count++;
        }
        cout << endl;
    }
    // seconf half
    count = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << count;
            if (col != n - row - 1)
            {
                cout << "*";
            }
            count++;
        }
        cout << endl;
    }
}