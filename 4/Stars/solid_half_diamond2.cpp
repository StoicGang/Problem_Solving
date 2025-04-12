#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // cout << "Enter N :";
    //  cin >> n;
    //   first half
    for (int row = 0; row < n; row++)
    {
        // Spaces print kr bhai
        for (int col = 0; col < (n - row - 1); col++)
        {
            cout << " ";
        }
        // stars print kr bhai
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // second half
    for (int i = 0; i < n; i++)
    {
        // spaces print kr bhai
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star print kr bhai
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}