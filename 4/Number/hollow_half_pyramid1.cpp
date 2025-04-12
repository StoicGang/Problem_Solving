#include <iostream>
using namespace std;

int main()
{
    int n;
    int row{0};

    cout << "enter the value of n: ";
    cin >> n;

    // normal printing

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            if (col == 0 || col == row || row == n - 1)
            {
                cout << col + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // reverse printing
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         if (col == 0 || col == n - row - 1 || row == 0)
    //         {
    //             cout << col + 1 << " ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    return 0;
}