/*
Title: Search in a Sorted Matrix
Problem: Find position (i,j) of target element X in N*N sorted matrix (rows and columns sorted in increasing order)

Input:
- First line: Number of test cases T
- For each test case:
    * First line: Matrix size N and target element X
    * Next N lines: N space separated integers representing matrix elements

Output:
- For each test case: Row and column indices (i,j) if target found, else "-1 -1"

Constraints:
- 1 <= T <= 10
- 1 <= N <= 10^3
- 1 <= X <= 10^6
- 1 <= Matrix elements <= 10^6

Approaches:

1. Brute Force Approach:
- Check each element by traversing matrix
- Time: O(N^2)
- Space: O(1)
- Not allowed as per constraints

2. Binary Search Approach (Optimal):
- Convert 2D matrix to 1D array conceptually
- Apply binary search using mapping:
    * row = mid/col
    * col = mid%col
- Time: O(log(N*N)) = O(logN)
- Space: O(1)

Algorithm Steps:
1. Calculate start = 0 and end = row*col-1
2. While start <= end:
     - Find mid = start + (end-start)/2
     - Map mid to matrix indices:
         * i = mid/col
         * j = mid%col
     - If element == target: return {i,j}
     - If element < target: search right half
     - If element > target: search left half
3. If not found return {-1,-1}

Main Benefits:
- Optimized O(logN) time complexity
- Constant O(1) space complexity
- Leverages sorted property of matrix
*/
#include <iostream>
#include <vector>
using namespace std;

void input(vector<vector<int>> &vec, int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> vec[i][j];
        }
    }
}

pair<int, int> search(vector<vector<int>> &vec, int target)
{
    int row = vec.size();
    int col = vec[0].size();
    int start = 0, end = row * col - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = vec[mid / row][mid % col];
        if (element == target)
        {
            return {(mid / row), (mid % col)};
        }
        else if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return {-1, -1};
}

int main()
{
    int num = 0;
    cin >> num;
    while (num != 0)
    {
        int row, target;
        cin >> row >> target;
        vector<vector<int>> vec(row, vector<int>(row));
        input(vec, row);
        pair<int, int> result = search(vec, target);
        cout << result.first << " " << result.second << endl;
        num--;
    }
    return 0;
}