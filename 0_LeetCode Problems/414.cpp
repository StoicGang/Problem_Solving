/*
Title: 414. Third Maximum Number

Problem:
Given an integer array nums, return the third distinct maximum number in this array.
If the third maximum does not exist, return the maximum number.

Input:
- An integer array nums.

Output:
- The third distinct maximum number if it exists, otherwise the maximum number.

Constraints:
- 1 <= nums.length <= 10^4
- -2^31 <= nums[i] <= 2^31 - 1

Approaches:

1. Sorting Approach:
    - Sort the array in descending order.
    - Traverse and count distinct elements until the third is found.
    - Time Complexity: O(n log n)
    - Space Complexity: O(1) or O(n) depending on sorting implementation.

2. Set Approach:
    - Use a set to store unique elements.
    - Remove the largest element twice to get the third maximum.
    - Time Complexity: O(n)
    - Space Complexity: O(n)

3. One-pass Linear Scan (Optimal, O(n)):
    - Track the top three distinct maximums using three variables.
    - Iterate through the array, updating the variables as needed.
    - Time Complexity: O(n)
    - Space Complexity: O(1)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;

        for (int num : nums)
        {
            if (num == first || num == second || num == third)
                continue;

            if (num > first)
            {
                third = second;
                second = first;
                first = num;
            }
            else if (num > second)
            {
                third = second;
                second = num;
            }
            else if (num > third)
            {
                third = num;
            }
        }

        return (third == LONG_MIN) ? first : third;
    }
};
