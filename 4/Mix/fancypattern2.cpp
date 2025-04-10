#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    // first half
    for (int row = 0; row < n; row++)
    {
        // stars part
        for (int col = 0; col < n - row + 1; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < row + 1; col++)
        {

            cout << row + 1;
            if (col < row)
            {
                cout << " * ";
            }
        }
        for (int col = 0; col < n - row + 1; col++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}