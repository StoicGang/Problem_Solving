/*
Title: Search a 2D Matrix II

Problem:
- Search for target value in 2D matrix
- Each row sorted left to right
- Each column sorted top to bottom
- Return true if target found

Input:
- m x n integer matrix
- Target integer to find
- Example: matrix = [[1,4,7,11,15],[2,5,8,12,19],...], target = 5

Output:
- Boolean indicating if target exists in matrix
- Example: true

Constraints:
- m == matrix.length
- n == matrix[i].length
- 1 <= n, m <= 300
- -10^9 <= matrix[i][j] <= 10^9
- All row elements sorted ascending
- All column elements sorted ascending
- -10^9 <= target <= 10^9

Approaches:
1. Start from Top-Right (Optimal)
   - Begin from top-right corner
   - If target smaller, move left
   - If target larger, move down
   Time: O(m + n)
   Space: O(1)

2. Binary Search Each Row
   - Apply binary search on each row
   Time: O(m log n)
   Space: O(1)

Time Complexity: O(m + n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>

bool searchMatrix(std::vector<std::vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int rowIndex = 0;
    int colIndex = col - 1;
    while (rowIndex < row && colIndex >= 0)
    {
        int element = matrix[rowIndex][colIndex];
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