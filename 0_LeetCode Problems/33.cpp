/*
Title: Search in Rotated Sorted Array

Problem:
- Search for target value in rotated sorted array
- Array was sorted but rotated at unknown pivot
- Must achieve O(log n) runtime complexity

Input:
- Integer array nums (rotated at some pivot)
- Target integer to find
- Example: nums = [4,5,6,7,0,1,2], target = 0

Output:
- Index of target if found, -1 if not found
- Example: 4 (as 0 is at index 4)

Constraints:
- 1 <= nums.length <= 5000
- -10^4 <= nums[i] <= 10^4
- All values unique
- -10^4 <= target <= 10^4
- Array was originally sorted in ascending order

Approaches:
1. Modified Binary Search
   - Find pivot point first
   - Determine which half to search
   - Apply binary search on chosen half
   Time: O(log n)
   Space: O(1)

2. Single Pass Binary Search
   - Compare with middle element
   - Check which half is sorted
   - Determine if target lies in sorted half
   Time: O(log n)
   Space: O(1)

Time Complexity: O(log n)
Space Complexity: O(1)
*/

// linear search
#include <bits/stdc++.h>

int search(std::vector<int> &nums, int target)
{
    bool is_present = false;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            is_present = true;
            return i;
        }
    }
    return -1;
}

// binary search
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
        if (nums[start] <= nums[mid])
        {
            if (nums[start] <= target && target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (nums[mid] < target && target <= nums[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}