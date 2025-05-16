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

Approaches:

1. Linear Search (Current Implementation):
    - Initialize maxCount = 0 and rowIndex = 0
    - Iterate through each row (i = 0 to m-1)
    - Count ones in current row
    - If count equals maxCount, take minimum row index
    - If count greater than maxCount, update maxCount and rowIndex
    Time: O(m*n), Space: O(1)

2. Binary Search (Alternative):
    - For each row, since matrix is binary, use binary search to find first '1'
    - Number of ones = (column length - position of first '1')
    - Track maximum count and corresponding row index
    Time: O(m*log n), Space: O(1)

3. Bit Manipulation (Alternative):
    - Use built-in functions like __builtin_popcount to count ones
    - Compare counts to find maximum
    Time: O(m*n/32), Space: O(1)

Space Complexity: O(1) excluding output array
*/

#include <bits/stdc++.h>

using namespace std;

// linear search approach
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

// Bit manipulation approach
vector<int> rowAndMaximumOnesBit(vector<vector<int>> &mat)
{
    int maxCount = 0;
    int rowIndex = 0;

    for (int i = 0; i < mat.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < mat[0].size(); j += 32)
        {
            unsigned int bits = 0;
            for (int k = 0; k < 32 && j + k < mat[0].size(); k++)
            {
                bits |= (mat[i][j + k] << k);
            }
            count += __builtin_popcount(bits);
        }

        if (count > maxCount)
        {
            maxCount = count;
            rowIndex = i;
        }
    }

    return {rowIndex, maxCount};
}