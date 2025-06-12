#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << "Enter the value of n :";
    cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     int cond = (row <= n / 2) ? (row * 2) : (2 * (n - row - 1));
    //     for (int col = 0; col <= cond; col++)
    //     {
    //         if (col <= cond / 2)
    //         {
    //             cout << col + 1 << " ";
    //         }
    //         else
    //         {
    //             cout << cond - col + 1 << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i <= n / 2; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }

        cout << endl;
    }
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2 - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
