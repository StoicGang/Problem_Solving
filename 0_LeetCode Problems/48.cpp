/*
Title: Rotate Image

Problem:
- Given an n x n 2D matrix representing an image
- Rotate the image by 90 degrees clockwise
- Must modify the matrix in-place

Input:
- n x n matrix of integers
- Example: [[1,2,3],[4,5,6],[7,8,9]]

Output:
- Same matrix rotated 90° clockwise
- Example: [[7,4,1],[8,5,2],[9,6,3]]

Constraints:
- n == matrix.length == matrix[i].length
- 1 <= n <= 20
- -1000 <= matrix[i][j] <= 1000
- Must modify matrix in-place

Approach:
1. Transpose the matrix
   - Swap elements across main diagonal
2. Reverse each row
   - For each row, swap elements from start to end
3. Matrix is now rotated 90° clockwise

Time Complexity: O(n²) where n is matrix dimension
Space Complexity: O(1) as modifications are in-place
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        // replacing rows with columns
        for (int i = 0; i < row; i++)
        {
            for (int j = i + 1; j < col; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // Inverting the rows
        for (int i = 0; i < row; i++)
        {
            int start = 0, end = col - 1;
            while (start < end)
            {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
    }
};