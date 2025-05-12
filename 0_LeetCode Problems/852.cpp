/*
Title: Peak Index in Mountain Array

Problem:
- Given a mountain array (increases then decreases)
- Find index of peak element
- Array is guaranteed to be a mountain array

Input:
- Integer array that is a mountain array
- Example: [0,1,0] or [0,2,1,0]

Output:
- Index of peak element
- Example: 1 (for both example inputs)

Constraints:
- 3 <= arr.length <= 10^5
- 0 <= arr[i] <= 10^6
- Array is guaranteed to be mountain array
- Must solve in O(log n) time complexity

Approach:
1. Binary Search to find peak
   - Initialize start = 0, end = length-1
   - While start < end:
     * If mid element < mid+1 element, peak is on right
     * Otherwise peak is on left or at mid
   - Return final mid position (peak)

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int start{0};
        int end = arr.size() - 1;
        int mid = start + (end - start) / 2;

        while (start < end)
        {
            if (arr[mid] < arr[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
            mid = start + (end - start) / 2;
        }
        return mid;
    }
};