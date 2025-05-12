/*
Title: Check if Array Is Sorted and Rotated

Problem:
- Check if array can be sorted by rotating
- Array is rotated if it's shifted right by some number of positions
- Return true if array was originally sorted

Input:
- Integer array nums
- Example: [3,4,5,1,2]

Output:
- Boolean indicating if array was sorted and rotated
- Example: true (array was [1,2,3,4,5] before rotation)

Constraints:
- 1 <= nums.length <= 100
- 1 <= nums[i] <= 100

Approaches:
1. Count Breaks Method
   - Count points where nums[i] > nums[i+1]
   - Check first and last elements
   - At most one break point for valid case
   Time: O(n)
   Space: O(1)

2. Compare with Sorted Array (Alternative)
   - Sort copy of array
   - Compare rotations with sorted array
   Time: O(n log n)
   Space: O(n)

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>

class Solution
{
public:
    bool check(std::vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] > nums[i])
            {
                count++;
            }
        }
        if (nums[n - 1] > nums[0])
        {
            count++;
        }
        return count <= 1;
    }
};