/*
Title: Find Peak Element

Problem:
- Find a peak element in array
- Peak element is strictly greater than neighbors
- Array elements not sorted
- Any peak element is valid answer

Input:
- Integer array nums
- Example: [1,2,3,1] or [1,2,1,3,5,6,4]

Output:
- Index of any peak element
- Example: 2 (for first example) or 5 (for second)

Constraints:
- 1 <= nums.length <= 1000
- -2^31 <= nums[i] <= 2^31 - 1
- nums[i] != nums[i + 1] for all i
- Must solve in O(log n) time

Approaches:
1. Binary Search (Optimal)
   - Compare mid with next element
   - If increasing, peak on right
   - If decreasing, peak on left
   Time: O(log n)
   Space: O(1)

2. Linear Search (Simple)
   - Check each element with neighbors
   - Return first peak found
   Time: O(n)
   Space: O(1)

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int start = 0, end = nums.size() - 1;
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] > nums[mid + 1])
            {
                end = mid;
            }
            else
            {
                start = mid + 1;
            }
        }
        return start;
    }
};