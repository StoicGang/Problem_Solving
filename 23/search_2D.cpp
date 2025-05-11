/*
Title: 2D Matrix Search
Problem:
    Search for an element in a sorted 2D matrix where:
    - Each row is sorted in ascending order
    - Each column is sorted in ascending order

Input:
    - 2D matrix of integers (n x m)
    - Target value to search for
    - Number of rows and columns

Output:
    - true if element found
    - false if element not found

Constraints:
    - Matrix dimensions are fixed at compile time (4 columns)
    - All elements are integers
    - Matrix follows sorted property in both rows and columns

Approaches:
1. Optimized Search (Current Implementation):
    - Start from top-right corner
    - If current > target, move left (smaller values)
    - If current < target, move down (larger values)
    - Repeat until element found or bounds exceeded
    Time: O(n + m), Space: O(1)

2. Alternative Approaches:
    a. Linear Search:
       - Check each element
       Time: O(n*m), Space: O(1)

    b. Binary Search on each row:
       - Binary search each sorted row
       Time: O(n*log m), Space: O(1)

Example:
Input matrix:
1  4  7  11
2  5  8  12
3  6  9  13
Target: 8
Output: true (element found)
*/

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