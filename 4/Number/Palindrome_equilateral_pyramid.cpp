#include <iostream>
using namespace std;

int main()
{

    int n{1};
    cout << "Enter the value of n: ";
    cin >> n;

    // Normal printing : approach 1
    int k = n;
    for (int row = 0; row < n; row++)
    {
        int c = 1;
        for (int col = 0; col < k; col++)
        {
            // spaces krle
            if (col < n - row - 1)
            {
                cout << "  ";
            }

            // number krle
            else if (col <= n - 1)
            {
                cout << c << " ";
                c++;
            }
            else if (col == n)
            {
                c -= 2;
                cout << c << " ";
                c--;
            }
            else
            {
                cout << c << " ";
                c--;
            }
        }
        k++;
        cout << endl;
    }

    // Normal printing : approach 2
    /*
    int row{1};
    while (row <= n)
    {
        // print space
        int space = n - row;
        while (space)
        {
            cout << "  ";
            space = space - 1;
        }

        // print 1st triangle
        int col = 1;
        while (col <= row)
        {
            cout << col << " ";
            col = col + 1;
        }

        // print 2nd triangle
        int start = row - 1;
        while (start)
        {
            cout << start << " ";
            start = start - 1;
        }

        cout << endl;
        row = row + 1;
    }
    */

    // reverse pattern

    // int row = n;

    // while (row >= 1)
    // {
    //     // Print space
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << " ";
    //         space = space - 1;
    //     }

    //     // Print 1st triangle
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << col;
    //         col = col + 1;
    //     }

    //     // Print 2nd triangle
    //     int start = row - 1;
    //     while (start)
    //     {
    //         cout << start;
    //         start = start - 1;
    //     }

    //     cout << endl;
    //     row = row - 1;
    // }

    return 0;
}