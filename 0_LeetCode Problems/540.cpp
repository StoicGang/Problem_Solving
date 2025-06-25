
/*
Title:
    540. Single Element in a Sorted Array

Input:
    - nums: A sorted vector of integers where every element appears exactly twice, except for one element which appears exactly once.
      Example: [1,1,2,3,3,4,4,8,8]

Output:
    - Returns the single element that appears only once in the array.
      Example: 2

Constraints:
    - 1 <= nums.length <= 10^5
    - 0 <= nums[i] <= 10^5
    - nums is sorted in non-decreasing order.
    - Every element appears exactly twice except for one element which appears exactly once.

Approach 1: Binary Search (Optimal)
    1. Initialize two pointers, left and right, at the start and end of the array.
    2. While left < right:
        a. Compute mid as the middle index between left and right.
        b. Ensure mid is even (if odd, decrement by 1) to compare pairs correctly.
        c. If nums[mid] == nums[mid + 1], the single element is in the right half; move left to mid + 2.
        d. Otherwise, the single element is in the left half (including mid); move right to mid.
    3. When left == right, return nums[left] as the single element.
    - Time Complexity: O(log n)
    - Space Complexity: O(1)

Alternative Approaches:
    - Linear Scan:
        1. Iterate through the array, comparing each pair of elements.
        2. Return the element that does not have a duplicate.
        - Time Complexity: O(n)
        - Space Complexity: O(1)
    - XOR Approach:
        1. XOR all elements in the array; pairs cancel out, leaving the single element.
        - Time Complexity: O(n)
        - Space Complexity: O(1)
    (Note: Only the binary search approach meets the O(log n) time constraint.)

*/
#include <vector>
using namespace std;
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (mid % 2 == 1)
            {
                mid--;
            }
            if (nums[mid] == nums[mid + 1])
            {
                left = mid + 2;
            }
            else
            {
                right = mid;
            }
        }
        return nums[left];
    }
};