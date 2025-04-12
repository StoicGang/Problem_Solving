#include <iostream>
using namespace std;

int main()
{
    int n;
    int row{0};

    cout << "enter the value of n: ";
    cin >> n;
    // Normal sequence of printing

    // reverse printing
    for (int row = 0; row < n; row++)
    {
        for (int col = row + 1; col <= n; col++)
        {
            if (col == n || row == 0 || col == row + 1)
            {
                cout << col << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}