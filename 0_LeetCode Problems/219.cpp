/*
Title: 219. Contains Duplicate II

Problem:
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

Input:
- nums: vector of integers
- k: integer

Output:
- bool: true if such indices exist, false otherwise

Constraints:
- 1 <= nums.length <= 10^5
- -10^9 <= nums[i] <= 10^9
- 0 <= k <= 10^5

Approaches:

1. Brute Force:
    - For each pair of indices (i, j), check if nums[i] == nums[j] and abs(i - j) <= k.
    - Time Complexity: O(n^2)
    - Space Complexity: O(1)

2. Hash Map (Optimal):
    - Use a hash map to store the last index of each number.
    - For each element, check if it exists in the map and if the difference of indices is <= k.
    - Time Complexity: O(n)
    - Space Complexity: O(n)

3. Sliding Window with Set:
    - Maintain a set of size at most k.
    - For each element, check if it exists in the set; if yes, return true.
    - Remove the element that is out of the window.
    - Time Complexity: O(n)
    - Space Complexity: O(k)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (seen.count(nums[i]) && i - seen[nums[i]] <= k)
                return true;
            seen[nums[i]] = i;
        }
        return false;
    }
};