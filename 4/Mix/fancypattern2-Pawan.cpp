#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << "Enter the value of n :";
    cin >> n;
    // first half
    // for (int row = 0; row < n; row++)
    // {
    //     // stars part
    //     for (int col = 0; col < n - row + 1; col++)
    //     {
    //         cout << "* ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {

    //         cout << row + 1;
    //         if (col < row)
    //         {
    //             cout << " * ";
    //         }
    //     }
    //     for (int col = 0; col < n - row + 1; col++)
    //     {
    //         cout << " *";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
            if (j < i)
            {
                cout << "* ";
            }
        }
        for (int j = 0; j < n + 1 - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}