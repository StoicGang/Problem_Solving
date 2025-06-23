/*
 Title:
   35. Search Insert Position

 Problem:
   Given a sorted array of distinct integers and a target value, return the index if the target is found.
   If not, return the index where it would be if it were inserted in order.
   The algorithm must have O(log n) runtime complexity.

 Input:
   - nums: A vector of integers, sorted in ascending order and containing distinct values.
   - target: An integer value to search for in the array.

 Output:
   - An integer representing the index of the target if found, or the index where the target should be inserted to maintain order.

 Constraints:
   - 1 <= nums.length <= 10^4
   - -10^4 <= nums[i] <= 10^4
   - nums contains distinct values sorted in ascending order.
   - -10^4 <= target <= 10^4

 Approaches:

   1. Binary Search (Implemented Approach)
      - Step 1: Initialize two pointers, start = 0 and end = nums.size() - 1.
      - Step 2: While start <= end:
          - Compute mid = start + (end - start) / 2.
          - If nums[mid] == target, return mid.
          - If nums[mid] < target, move start to mid + 1.
          - If nums[mid] > target, move end to mid - 1.
      - Step 3: If the loop ends without finding the target, return start (the insertion position).
      - Time Complexity: O(log n)
      - Space Complexity: O(1)

   2. Linear Search (Not implemented, not optimal for constraints)
      - Step 1: Iterate through the array from left to right.
      - Step 2: If nums[i] >= target, return i.
      - Step 3: If target is greater than all elements, return nums.size().
      - Time Complexity: O(n)
      - Space Complexity: O(1)

   Note: The binary search approach is preferred due to the required O(log n) time complexity.
*/
#include <vector>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int start = 0, end = nums.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (target == nums[mid])
            {
                return mid;
            }
            else if (target > nums[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return start;
    }
};