/*
 Title: 1470. Shuffle the Array

 Problem:
 Given an array nums consisting of 2n elements in the form [x1, x2, ..., xn, y1, y2, ..., yn],
 return the array in the form [x1, y1, x2, y2, ..., xn, yn].

 Input:
 - nums: vector<int> of length 2n, where the first n elements are x1...xn and the next n elements are y1...yn
 - n: integer, half the length of nums

 Output:
 - vector<int> containing the elements in the order [x1, y1, x2, y2, ..., xn, yn]

 Constraints:
 - 1 <= n <= 500
 - nums.length == 2n
 - 1 <= nums[i] <= 10^3

 Approaches:

 1. Two-pointer Approach (Implemented):
    - Initialize two pointers: left at 0 (start of x's), right at n (start of y's).
    - Iterate while left < n and right < 2n:
        - Push nums[left] to result, increment left.
        - Push nums[right] to result, increment right.
    - Return the result vector.
    - Time Complexity: O(n)
    - Space Complexity: O(n) (for the output array)

 2. In-place Approach (Alternative, not implemented here):
    - Encode both x and y values into a single integer at each index using bit manipulation.
    - Decode the values in a second pass to rearrange in-place.
    - Time Complexity: O(n)
    - Space Complexity: O(1) (ignoring output array, if allowed to modify input)

 Note: The implemented approach is simple and efficient for the given constraints.
 */
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> ans;
        int left = 0, right = n;
        while (left < n && right < nums.size())
        {
            ans.push_back(nums[left++]);
            ans.push_back(nums[right++]);
        }
        return ans;
    }
};
