#include <bits/stdc++.h>
using namespace std;

void print(int rows, int cols, int arr[][4])
{
    // Example: Printing the array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printrow_sum(int rows, int cols, int arr[][4])
{
    cout << "row wise sum is \n";
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

void printcol_sum(int rows, int cols, int arr[][4])
{
    cout << "\ncol wise sum is \n";
    for (int i = 0; i < cols; i++)
    {
        int sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
}

void printkey(int rows, int cols, int arr[][4], int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
            {
                cout << "Present\n";
            }
        }
    }
    cout << "\nAbsent\n";
}

int MinEl(int arr[][4], int rows, int cols)
{
    int Mini = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < Mini)
            {
                Mini = arr[i][j];
            }
        }
    }
    return Mini;
}

int MaxEl(int arr[][4], int rows, int cols)
{
    int maxi = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int main()
{
    // Declaring a 2D array
    const int rows = 3;
    const int cols = 4;
    int arr[rows][cols] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2};
    print(rows, cols, arr);

    // printrow_sum(rows, cols, arr);
    // printcol_sum(rows, cols, arr);

    // printkey(rows, cols, arr, 12);
    cout << "Minimum element : " << MinEl(arr, 3, 4);
    cout << "\nMaximum Element : " << MaxEl(arr, 3, 4);

    return 0;
}