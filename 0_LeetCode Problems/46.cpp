/*
Title: Permutations

Problem:
- Given an array of distinct integers
- Return all possible permutations in any order

Input:
- Array nums containing distinct integers
- Example: [1,2,3]

Output:
- Vector of all possible permutations
- Example: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Constraints:
- 1 <= nums.length <= 6
- -10 <= nums[i] <= 10
- All integers in nums are unique

Approach:
1. Use backtracking with recursion
   - Start with first index and swap with each element
   - Recursively generate permutations for remaining elements
   - Backtrack by swapping back elements
2. Store each valid permutation in result vector

Time Complexity: O(n!)
Space Complexity: O(n) for recursion stack
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void solve(vector<int> &nums, int index, vector<vector<int>> &ans)
    {
        // base condition
        if (index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[index], nums[i]);
            solve(nums, index + 1, ans);
            // backtracking
            swap(nums[index], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        int index = 0;
        vector<vector<int>> ans;
        solve(nums, index, ans);
        return ans;
    }
};