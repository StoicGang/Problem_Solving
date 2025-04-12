#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    cout << "Enter N :";
    cin >> n;
    //   first half
    for (int row = 0; row < 2 * n - 1; row++)
    {
        // int count = 0;
        // if (row < n)
        // {
        //     count = row;
        // }
        // else
        // {
        //     count = n - (row % n) - 2;
        // }
        int count = row < n ? row : n - (row % n) - 2;
        for (int col = 0; col <= count; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}