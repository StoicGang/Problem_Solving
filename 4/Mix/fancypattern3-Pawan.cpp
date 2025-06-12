#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int count = 1;

    // cout << "Enter the value of n :";
    // cin >> n;
    // // first half
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << count;
    //         if (col < row)
    //         {
    //             cout << "*";
    //         }
    //         count++;
    //     }
    //     cout << endl;
    // }
    // // seconf half
    // count = 1;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << count;
    //         if (col != n - row - 1)
    //         {
    //             cout << "*";
    //         }
    //         count++;
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count;
            if (j < i)
            {
                cout << "*";
            }
            count++;
        }
        cout << endl;
    }
    int maxCount = (n * (n + 1)) / 2; 

    for (int i = n; i >= 1; i--)
    {
        int num = maxCount - (i - 1); 
        for (int j = 0; j < i; j++)
        {
            cout << num++;
            if (j < i - 1)
                cout << "*"; 
        }
        maxCount -= i; 
        cout << endl;
    }
    return 0;
}