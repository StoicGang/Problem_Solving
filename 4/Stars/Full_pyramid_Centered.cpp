#include <iostream>
using namespace std;

/*
This code prints a centered pyramid pattern of stars.
Each row contains an increasing number of stars, starting with 1 star at the top row.
The stars are symmetrically placed in each row with equal spaces before and after the stars, giving the shape of a pyramid.
The pyramid grows wider with each row, and the stars are evenly spaced to maintain symmetry.
*/

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    // Normal pyramid
    /*
       for (int row = 0; row < n; row++)
       {
           int k = 0;
           for (int col = 0; col < (2 * n - 1); col++)
           {
               if (col < (n - row - 1))
               {
                   cout << "  ";
               }
               else if (k < (2 * row + 1))
               {
                   cout << "* ";
                   k++;
               }
               else
               {
                   cout << "  ";
               }
           }
           cout << endl;
       }
   */

    // Reverse pyramid or inverted pyramid
    for (int row = 0; row < n; row++)
    {
        int k = 0;
        for (int col = 0; col < (2 * n - 1); col++)
        {
            if (col < row)
            {
                cout << "  ";
            }
            else if (k < (2 * (n - row) - 1))
            {
                cout << "* ";
                k++;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}