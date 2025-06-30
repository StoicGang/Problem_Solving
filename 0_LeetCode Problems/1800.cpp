
/*
 Title: 1800. Maximum Ascending Subarray Sum

 Problem:
 Given an array of positive integers nums, return the maximum possible sum of a strictly increasing subarray in nums.
 A subarray is defined as a contiguous sequence of numbers in an array.

 Input:
 - vector<int> nums: An array of positive integers.

 Output:
 - int: The maximum sum of any strictly increasing contiguous subarray.

 Constraints:
 - 1 <= nums.length <= 100
 - 1 <= nums[i] <= 100

 Approaches:

 1. Single Pass Iteration (Implemented)
    - Step 1: Initialize two variables, sum and maxi, with the value of the first element.
    - Step 2: Iterate through the array from the second element.
    - Step 3: If the current element is greater than the previous, add it to sum (continue the ascending subarray).
    - Step 4: Otherwise, reset sum to the current element (start a new ascending subarray).
    - Step 5: After each step, update maxi with the maximum of maxi and sum.
    - Step 6: Return maxi after the loop.
    - Time Complexity: O(n), where n is the length of nums.
    - Space Complexity: O(1), constant extra space.

 2. Brute Force (Not Implemented)
    - Step 1: For every possible starting index, iterate through all possible ending indices.
    - Step 2: For each subarray, check if it is strictly increasing and calculate its sum.
    - Step 3: Keep track of the maximum sum found.
    - Time Complexity: O(n^2), where n is the length of nums.
    - Space Complexity: O(1), constant extra space.
 */
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxAscendingSum(vector<int> &nums)
    {
        int sum = nums[0], maxi = nums[0]; // Initialize both with nums[0]
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[i - 1])
            {
                sum += nums[i];
            }
            else
            {
                sum = nums[i]; // Reset sum for a new ascending subarray
            }
            maxi = max(maxi, sum); // Update maximum sum
        }
        return maxi;
    }
};