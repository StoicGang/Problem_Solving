#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row, col;
    cout << "Rows Col :";
    cin >> row >> col;
    int **arr = new int *[row];

    // creating 2d array
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // taking input
    cout << "Elements of array :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}