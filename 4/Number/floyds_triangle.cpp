#include <iostream>
using namespace std;

int main()
{

    int n{1};
    cout << "Enter the value of n: ";
    cin >> n;

    int count{1};
    int row{1};
    while (row <= n)
    {
        int col{1};
        while (col <= row)
        {
            cout << count << " ";
            count = count + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    // Reverse pattern
    // int maxNum = (n * (n + 1)) / 2;
    // while (row <= n)
    // {
    //     int col = 1;
    //     int num = maxNum;

    //     // Print numbers in the row
    //     while (col <= n - row + 1)
    //     {
    //         cout << num << " ";
    //         num = num - 1;
    //         col = col + 1;
    //     }
    //     maxNum -= (n - row + 1);

    //     cout << endl;
    //     row++;
    // }

    return 0;
}