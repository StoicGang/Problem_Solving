#include <bits/stdc++.h>

using namespace std;

bool search_linear(int arr[][3], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3];
    cout << "Enter Elements row wise :";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "your 2d arr is " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int target = 0;
    cout << "Enter the target : ";
    cin >> target;
    cout << search_linear(arr, target, 3, 3);
    return 0;
}