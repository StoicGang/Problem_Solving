#include <bits/stdc++.h>
using namespace std;

// Function to input elements in 2D array
void inputArray(int arr[][100], int rows, int cols)
{
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
}

// Function to print 2D array
void printArray(int arr[][100], int rows, int cols)
{
    cout << "The array elements are:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int maxEle(int arr[][100], int rows, int cols)
{
    int maxi = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            maxi = max(maxi, arr[i][j]);
        }
    }
    return maxi;
}

int minEle(int arr[][100], int rows, int cols)
{
    int mini = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mini = min(mini, arr[i][j]);
        }
    }
    return mini;
}

int main()
{
    int arr[100][100];
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    inputArray(arr, rows, cols);
    printArray(arr, rows, cols);

    cout << "Max element is : " << maxEle(arr, rows, cols);
    cout << "\nMin element is : " << minEle(arr, rows, cols);
    return 0;
}