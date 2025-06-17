/*
 Title: Remove Duplicates from Sorted Array

 Problem:
     Given a sorted array, remove duplicates in-place and return the number of unique elements.
     The relative order of elements should be maintained.

 Input:
     - nums: vector<int> - A sorted array of integers in non-decreasing order

 Output:
     - int: Number of unique elements (k)
     - The first k elements of nums should contain the unique elements

 Constraints:
     - 1 <= nums.length <= 3 * 10^4
     - -100 <= nums[i] <= 100
     - Array is sorted in non-decreasing order

 Approaches:

 1. Two Pointer Approach (Current Implementation):
    - Use two pointers i and j
    - Compare adjacent elements
    - Count unique elements when adjacent elements differ
    - Time Complexity: O(n)
    - Space Complexity: O(1)

 2. Optimal Two Pointer Approach (Recommended):
    - Use two pointers: slow and fast
    - Move fast pointer to scan array
    - When finding unique element, copy to slow pointer position
    - Increment slow pointer
    - Time Complexity: O(n)
    - Space Complexity: O(1)

 */
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 1, size = nums.size();
        int count = 1;
        while (i < size)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[count] = nums[i];
                count++;
            }
            i++;
        }
        return count;
    }
};