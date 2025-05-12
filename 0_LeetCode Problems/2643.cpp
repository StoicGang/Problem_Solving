/*
Title: Row With Maximum Ones

Problem:
- Given a m x n binary matrix mat
- Find the 0-indexed position of row with maximum ones
- If multiple rows have same count, select smallest row number
- Return array containing [row_index, count_of_ones]

Input:
- Binary matrix mat[m][n] where elements are 0 or 1
- Example: [[0,1],[1,0]]

Output:
- Vector of 2 integers [row_index, count_of_ones]
- Example: [0,1]

Constraints:
- m == mat.length
- n == mat[i].length
- 1 <= m, n <= 100
- mat[i][j] is either 0 or 1

Approach:
1. Initialize maxCount = 0 and rowIndex = 0
2. Iterate through each row (i = 0 to m-1)
   - Count ones in current row
   - If count equals maxCount, take minimum row index
   - If count greater than maxCount, update maxCount and rowIndex
3. Return vector containing [rowIndex, maxCount]

Time Complexity: O(m*n) where m = rows, n = columns
Space Complexity: O(1) excluding output array
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
{
    int maxCount = 0;
    int rowIndex = 0;
    vector<int> temp;
    for (int i = 0; i < mat.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < mat[0].size(); j++)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
        }
        if (count == maxCount)
        {
            rowIndex = min(rowIndex, i);
            maxCount = count;
        }
        else if (count > maxCount)
        {
            maxCount = count;
            rowIndex = i;
        }
    }
    temp.push_back(rowIndex);
    temp.push_back(maxCount);
    return temp;
}