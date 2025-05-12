/*
Title: Pascal's Triangle

Problem:
- Generate first numRows of Pascal's triangle
- Each number is sum of two numbers directly above it

Input:
- Integer numRows (number of rows to generate)
- Example: numRows = 5

Output:
- Vector of vectors representing Pascal's triangle
- Example: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

Constraints:
- 1 <= numRows <= 30
- Each row starts and ends with 1
- Each number is sum of two numbers above it

Approach:
1. Build triangle row by row
   - First and last elements of each row are 1
   - For middle elements (j from 1 to i-1):
     * Calculate as sum of elements from row above
     * val[i][j] = val[i-1][j-1] + val[i-1][j]
   - Add each completed row to result

Time Complexity: O(numRows^2)
Space Complexity: O(numRows^2) for result array
*/

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> pascalTriangle;

    for (int i = 0; i < numRows; i++)
    {
        vector<int> row(i + 1, 1);

        for (int j = 1; j < i; j++)
        {
            row[j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
        }

        pascalTriangle.push_back(row);
    }

    return pascalTriangle;
}