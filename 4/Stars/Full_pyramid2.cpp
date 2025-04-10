#include <iostream>

using namespace std;
/*
This code prints a right-aligned triangle pattern of stars.
The number of stars increases with each row, starting from 1 in the first row and
adding one additional star per row.
The spaces before the stars in each row decrease as you move down the rows, making it right-aligned.
The overall shape is a right triangle.
*/
int main()
{
    int n;
    cout << "Enter value of n :";
    cin >> n;

    // Normal pyramid

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
            cout << "*" << " ";
        }
        cout << endl;
    }

    // Reverse or inverted pyramid

    /*
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
                cout << "*" << " ";
            }
            cout << endl;
        }
    */
    return 0;
}