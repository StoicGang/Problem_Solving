#include <bits/stdc++.h>

using namespace std;

void row_wise_sum(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

void col_wise_sum(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
}

int largestRowSum(int arr[][3], int row, int col)
{
    int maxNo = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxNo)
        {
            rowIndex = i;
        }
        maxNo = max(maxNo, sum);
    }
    cout << "\nMax sum is : " << maxNo << " at row index ";
    return rowIndex;
}

int main()
{
    int arr[3][3]{1, 2, 5, 8, 6, 3, 9, 4, 7};
    cout << "Arr is : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Row wise sum is : ";
    row_wise_sum(arr, 3, 3);
    cout << "\nCol wise sum is : ";
    col_wise_sum(arr, 3, 3);
    cout << largestRowSum(arr, 3, 3);
    return 0;
}