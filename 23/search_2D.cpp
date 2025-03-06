#include <bits/stdc++.h>

using namespace std;

bool searchArr(int arr[][4], int row, int col, int target)
{
    int rowIndex = 0;
    int colIndex = col - 1;
    while (rowIndex < row && colIndex >= 0)
    {
        int element = arr[rowIndex][colIndex];
        if (element == target)
        {
            return 1;
        }
        else if (element < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
    return 0;
}

void print(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][4]{1, 4, 7, 11, 2, 5, 8, 12, 3, 6, 9, 13};
    print(arr, 3, 4);
    cout << "is Present " << searchArr(arr, 3, 4, 54);
    return 0;
}