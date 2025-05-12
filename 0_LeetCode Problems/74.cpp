/*
Title: Search a 2D Matrix

Problem:
- Search for target value in m x n matrix
- Matrix has special properties:
  * Each row is sorted in ascending order
  * First element of each row is greater than last element of previous row

Input:
- m x n matrix with sorted properties
- Target integer to find
- Example: matrix = [[1,3,5,7],[10,11,16,20]], target = 3

Output:
- Boolean indicating if target exists in matrix
- Example: true

Constraints:
- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 100
- -10^4 <= matrix[i][j], target <= 10^4
- Matrix is sorted row-wise and column-wise
- Must achieve O(log(m * n)) complexity

Approaches:
1. Binary Search on Flattened Matrix (Optimal)
   - Treat 2D matrix as 1D sorted array
   - Convert mid index to row/col coordinates
   - Apply binary search
   Time: O(log(m*n))
   Space: O(1)

2. Two Binary Searches
   - Binary search for row
   - Binary search in found row
   Time: O(log m + log n)
   Space: O(1)

Time Complexity: O(log(m*n))
Space Complexity: O(1)
*/

#include <bits/stdc++.h>

bool searchMatrix(std::vector<std::vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int element = matrix[mid / col][mid % col];
        if (element == target)
        {
            return -1;
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
    return false;
}