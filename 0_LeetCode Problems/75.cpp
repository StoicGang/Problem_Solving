/*
Problem: Sort an array containing only 0s, 1s, and 2s (Dutch National Flag)
Input: Array of integers (nums) where each element is 0, 1, or 2
Output: Same array sorted in ascending order in-place
Constraints:
- 1 <= nums.length <= 300
- nums[i] is 0, 1, or 2
- Must solve without using library sort

Approaches:
1. Counting Sort - O(n) time, O(1) space
    Count occurrences and overwrite array
2. Dutch National Flag - O(n) time, O(1) space
    Three pointers (start, mid, end) to partition array
3. Standard Sort - O(nlogn) time, O(1) space
    Not allowed per constraints
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