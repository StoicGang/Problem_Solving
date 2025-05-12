/*
Title: Move Zeroes

Problem:
- Move all zeroes to end of array
- Maintain relative order of non-zero elements
- Must modify array in-place

Input:
- Integer array nums
- Example: [0,1,0,3,12]

Output:
- Same array with zeroes moved to end
- Example: [1,3,12,0,0]

Constraints:
- 1 <= nums.length <= 10^4
- -2^31 <= nums[i] <= 2^31 - 1
- Must do in-place without making copy
- Minimize operations

Approach:
1. Two-pointer technique
   - Keep track of position for non-zero element
   - Move non-zero elements to front
   - Fill remaining positions with zeroes
   - Maintain relative order of non-zero elements

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    int nonZeroIndex = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[nonZeroIndex++] = nums[i];
        }
    }
    for (int i = nonZeroIndex; i < nums.size(); i++)
    {
        nums[i] = 0;
    }
}