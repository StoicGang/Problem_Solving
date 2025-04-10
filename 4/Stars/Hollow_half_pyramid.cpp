#include <iostream>
using namespace std;

int main()
{
    int n;
    int row{0};

    cout << "enter the value of n: ";
    cin >> n;
    // Normal Printing
    while (row < n)
    {
        int j{0};

        while (j <= row)
        {
            if (j == 0 || j == row || row == n - 1)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << "  ";
            }
            j = j + 1;
        }
        cout << endl;
        row = row + 1;
    }

    // reverse printing
    // while (row < n)
    // {
    //     int j = 0;
    //     while (j < n)
    //     {
    //         if (row == 0 || j == n - row - 1 || j == 0)
    //         {
    //             cout << "*" << " ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }
    return 0;
}