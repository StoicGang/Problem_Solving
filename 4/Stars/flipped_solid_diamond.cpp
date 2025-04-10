#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Upper half
    for (int row = 0; row < n; row++)
    {

        // 1.half pyramid
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        // 2.space full pyramid
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << " ";
        }
        // 3.half pyramid
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Lower half
    for (int row = 0; row < n; row++)
    {
        // 1.half pyramid
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        // 2.space full pyramid
        for (int col = 0; col < 2 * (n - row) - 1; col++)
        {
            cout << " ";
        }
        // 3.half pyramid
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}