#include <iostream>

using namespace std;

int main()
{
    int row_count = 2, col_count = 2;
    cout << "rows cols :";
    cin >> row_count >> col_count;
    for (int row = 0; row < row_count; row++)
    {
        for (int col = 0; col < col_count; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}