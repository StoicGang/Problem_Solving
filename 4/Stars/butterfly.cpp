#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    cout << "Enter n : ";
    cin >> n;
    // first approach
    //  // first half
    //  for (int row = 0; row < n; row++)
    //  {
    //      // stars print krlo bhai
    //      for (int col = 0; col <= row; col++)
    //      {
    //          cout << "* ";
    //      }
    //      for (int col = 0; col < 2 * (n - row - 1); col++)
    //      {
    //          cout << "  ";
    //      }
    //      for (int col = 0; col <= row; col++)
    //      {
    //          cout << "* ";
    //      }
    //      cout << endl;
    //  }
    //  // second half
    //  for (int row = 0; row < n; row++)
    //  {
    //      for (int col = 0; col < n - row; col++)
    //      {
    //          cout << "* ";
    //      }
    //      // spaces krle
    //      for (int col = 0; col < 2 * (row); col++)
    //      {
    //          cout << "  ";
    //      }
    //      // stars  krle
    //      for (int col = 0; col < n - row; col++)
    //      {
    //          cout << "* ";
    //      }
    //      cout << endl;
    //  }

    // approach 2
    for (int row = 0; row < (2 * n); row++)
    {
        int cond = row < n ? row : n + (n - row - 1);
        int spaces = row < n ? 2 * (n - cond - 1) : row - cond - 1;
        for (int col = 0; col < (2 * n); col++)
        {
            if (col <= cond)
            {
                cout << "* ";
            }
            else if (spaces > 0)
            {
                cout << "  ";
                spaces--;
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}