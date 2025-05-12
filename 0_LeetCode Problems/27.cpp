/*
Title: Remove Element

Problem:
- Remove all occurrences of val from nums in-place
- Return number of elements not equal to val
- Order of remaining elements can be changed

Input:
- Integer array nums
- Integer val to remove
- Example: nums = [3,2,2,3], val = 3

Output:
- Number of elements after removing val
- Example: 2 (array becomes [2,2,_,_])

Constraints:
- 0 <= nums.length <= 100
- 0 <= nums[i] <= 50
- 0 <= val <= 100
- Must modify array in-place

Approaches:
1. Two-pointer Method (Optimal)
   - One pointer for new array position
   - One pointer to scan array
   - Skip elements equal to val
   Time: O(n)
   Space: O(1)

2. Copy and Override
   - Copy non-val elements to front
   - Override remaining positions
   Time: O(n)
   Space: O(1)

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>

int removeElement(std::vector<int> &nums, int val)
{
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}