#include <bits/stdc++.h>

using namespace std;

bool binary_search(int arr[][4], int row, int col, int target)
{
    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int element = arr[mid / col][mid % col];
        if (element == target)
        {
            return 1;
        }
        else if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}

void print(int arr[][4], int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][4]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    print(arr, 3, 4);
    cout << "Binary search " << binary_search(arr, 3, 4, 56);
    return 0;
}