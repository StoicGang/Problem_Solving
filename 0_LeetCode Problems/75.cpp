/*
Title: Sort Colors (Dutch National Flag Problem)

Problem:
- Given array of integers with only values 0, 1, and 2
- Sort the array in ascending order in-place
- Must solve without using sorting library

Input:
- Array nums containing only 0s, 1s, and 2s
- Example: [2,0,2,1,1,0]

Output:
- Same array sorted in ascending order
- Example: [0,0,1,1,2,2]

Constraints:
- 1 <= nums.length <= 300
- nums[i] is either 0, 1, or 2

Approaches:
1. Dutch National Flag Algorithm
   - Use three pointers: low, mid, high
   - Place 0s before low, 2s after high
   - 1s will automatically be between low and high
   Time Complexity: O(n)
   Space Complexity: O(1)

2. Counting Sort (Alternative)
   - Count occurrences of 0s, 1s, and 2s
   - Overwrite array with correct counts
   Time Complexity: O(n)
   Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int s = 0, mid = 0, e = nums.size() - 1;
        while (mid <= e)
        {
            if (nums[mid] == 0)
            {
                swap(nums[s], nums[mid]);
                s++;
                mid++;
            }
            else if (nums[mid] == 2)
            {
                swap(nums[e], nums[mid]);
                e--;
            }
            else
            {
                mid++;
            }
        }
    }
};