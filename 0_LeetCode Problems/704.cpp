/*
Title: Binary Search

Problem:
- Given a sorted array and target value
- Find the index of target in the array
- Return -1 if target does not exist

Input:
- Sorted integer array nums
- Target integer to find
- Example: nums = [-1,0,3,5,9,12], target = 9

Output:
- Index of target if found, -1 if not found
- Example: 4 (for the above input)

Constraints:
- 1 <= nums.length <= 10^4
- -10^4 < nums[i], target < 10^4
- All integers in nums are unique
- nums is sorted in ascending order
- Must achieve O(log n) runtime complexity

Approach:
1. Use binary search algorithm
   - Initialize start = 0, end = length-1
   - While start <= end:
     * Calculate mid = start + (end-start)/2
     * If target found at mid, return mid
     * If target > mid element, search right half
     * If target < mid element, search left half
   - Return -1 if not found

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>

int search(std::vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}