/*
54. Spiral Matrix

Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

Example 2:
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]


Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int row = matrix.size(), col = matrix[0].size();
    int starting_row = 0, starting_col = 0;
    int ending_row = row - 1, ending_col = col - 1;
    int count = 0, TotalCount = row * col;
    vector<int> ans;
    while (count < TotalCount)
    {
        // starting row
        for (int i = starting_col; i <= ending_col && count < TotalCount; i++)
        {
            ans.push_back(matrix[starting_row][i]);
            count++;
        }
        starting_row++;
        // ending col
        for (int i = starting_row; i <= ending_row && count < TotalCount; i++)
        {
            ans.push_back(matrix[i][ending_col]);
            count++;
        }
        ending_col--;
        // ending row
        if (starting_row <= ending_row)
        {
            for (int i = ending_col; i >= starting_col && count < TotalCount; i--)
            {
                ans.push_back(matrix[ending_row][i]);
                count++;
            }
            ending_row--;
        }

        // starting col
        if (starting_col <= ending_col)
        {
            for (int i = ending_row; i >= starting_row && count < TotalCount; i--)
            {
                ans.push_back(matrix[i][starting_col]);
                count++;
            }
            starting_col++;
        }
    }
    return ans;
}