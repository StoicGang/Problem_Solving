#include <iostream>
using namespace std;

int main()
{
    int n;
    int i{1};

    cout << "enter the value of n: ";
    cin >> n;
    // Normal sequence of printing

    while (i <= n)
    {
        int j{1};

        while (j <= n)
        {
            cout << j << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Reversal sequence printing
    // while (i <= n)
    // {
    //     int j{1};

    //     while (j <= n)
    //     {
    //         cout << n - j + 1 << " ";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    return 0;
}