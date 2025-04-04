#include <iostream>

using namespace std;

int main()
{
    int row_count = 0, col_count = 0;
    cout << "rows cols :";
    cin >> row_count >> col_count;
    for (int row = 0; row < row_count; row++)
    {
        if (row == 0 || row == row_count - 1)
        {
            for (int col = 0; col < col_count; col++)
            {

                cout << "*" << " ";
            }
        }
        else
        {
            cout << "*" << " ";
            for (int col = 0; col < col_count - 2; col++)
            {
                cout << "  ";
            }
            cout << "*" << " ";
        }
        cout << endl;
    }
}