/*
Title: 217. Contains Duplicate

Problem:
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Input:
- vector<int> nums: An array of integers.

Output:
- bool: true if any value appears at least twice, false otherwise.

Constraints:
- 1 <= nums.length <= 10^5
- -10^9 <= nums[i] <= 10^9

Approaches:

1. Sorting Approach (Implemented)
    - Step 1: Sort the array.
    - Step 2: Iterate through the sorted array and check if any consecutive elements are equal.
    - Time Complexity: O(n log n) due to sorting.
    - Space Complexity: O(1) if sorting in-place.

2. Hash Set Approach
    - Step 1: Initialize an empty hash set.
    - Step 2: Iterate through the array, for each element:
         - If the element is already in the set, return true.
         - Otherwise, insert the element into the set.
    - Step 3: If no duplicates found, return false.
    - Time Complexity: O(n)
    - Space Complexity: O(n)

3. Brute Force Approach
    - Step 1: Use two nested loops to compare every pair of elements.
    - Step 2: If any pair is equal, return true.
    - Step 3: If no duplicates found, return false.
    - Time Complexity: O(n^2)
    - Space Complexity: O(1)
*/
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] == nums[i])
            {
                return true;
            }
        }
        return false;
    }
};