/*
Title:
2319. Check if Matrix Is X-Matrix

Input:
- grid: A 2D integer vector of size n x n representing a square matrix.

Output:
- Returns true if grid is an X-Matrix, otherwise returns false.

Constraints:
- n == grid.length == grid[i].length
- 3 <= n <= 100
- 0 <= grid[i][j] <= 10^5

Approach:
1. Iterate through each cell (i, j) of the matrix:
    a. If the cell is on either the main diagonal (i == j) or the anti-diagonal (i + j == n - 1):
        - Check if grid[i][j] is non-zero.
        - If any diagonal element is zero, return false.
    b. If the cell is not on a diagonal:
        - Check if grid[i][j] is zero.
        - If any non-diagonal element is non-zero, return false.
2. If all checks pass, return true.

Time Complexity:
- O(n^2), where n is the size of the matrix, as each cell is visited once.

Space Complexity:
- O(1), as only a constant amount of extra space is used.
*/
#include <vector>
using namespace std;
class Solution
{
public:
    bool checkXMatrix(vector<vector<int>> &grid)
    {
        int n = grid.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j or i + j == n - 1)
                {
                    if (grid[i][j] == 0)
                    {
                        return false;
                    }
                }
                else if (grid[i][j] != 0)
                {
                    return false;
                }
            }
        }
        return true;
    }
};