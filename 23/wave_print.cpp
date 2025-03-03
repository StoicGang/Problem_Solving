#include <bits/stdc++.h>

using namespace std;

void wave_print(int arr[][3], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        if (col & 1)
        {
            // for odd coloums
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        else
        {
            // for even coloums
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void print(int arr[][3], int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Array is : " << endl;
    print(arr, 3, 3);
    cout << "\nWave print is : " << endl;
    wave_print(arr, 3, 3);
    return 0;
}