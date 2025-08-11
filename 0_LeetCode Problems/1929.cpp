/*
Title: 1929. Concatenation of Array

Problem:
Given an integer array nums of length n, create an array ans of length 2n where:
- ans[i] == nums[i]
- ans[i + n] == nums[i] for 0 <= i < n

Input:
- nums: vector<int> of length n (1 <= n <= 1000), 1 <= nums[i] <= 1000

Output:
- ans: vector<int> of length 2n, concatenation of nums with itself

Constraints:
- 1 <= n <= 1000
- 1 <= nums[i] <= 1000

Approaches:

1. Brute Force (Two Loops)
    - Iterate over nums twice, appending each element to ans.
    - Time Complexity: O(n)
    - Space Complexity: O(2n)

2. Single Loop with Preallocation
    - Preallocate ans with size 2n.
    - For i in 0 to n-1, set ans[i] = nums[i] and ans[i+n] = nums[i].
    - Time Complexity: O(n)
    - Space Complexity: O(2n)

3. Using STL (C++ specific)
    - Use vector insert or copy to concatenate nums to itself.
    - Time Complexity: O(n)
    - Space Complexity: O(2n)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(nums[i]);
        }
        return ans;
    }
};