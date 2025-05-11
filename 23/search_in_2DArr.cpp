/*
Title: Linear Search in 2D Array
Problem:
    Implement linear search to find an element in a 2D array.
    The array is not necessarily sorted.

Input:
    - 2D array of integers (3x3 fixed size)
    - Target value to search for
    - Number of rows and columns

Output:
    - true if element found
    - false if element not found

Constraints:
    - Matrix dimensions are fixed at compile time (3x3)
    - All elements are integers
    - No specific ordering of elements required

Approach:
1. Linear Search (Current Implementation):
    - Traverse array row by row
    - Check each element against target
    - Return true if match found
    - Return false after checking all elements
    Time: O(n*m), Space: O(1)
    where n = number of rows, m = number of columns

Example:
Input:
Matrix:
1 2 3
4 5 6
7 8 9
Target: 5
Output: true (element found)
*/

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