/*
 Title: 1365. How Many Numbers Are Smaller Than the Current Number

 Problem:
 Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it.
 That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
 Return the answer in an array.

 Input:
 - nums: vector<int> of size n (2 <= n <= 500), where each element 0 <= nums[i] <= 100

 Output:
 - vector<int> where the i-th element is the count of numbers in nums that are smaller than nums[i]

 Constraints:
 - 2 <= nums.length <= 500
 - 0 <= nums[i] <= 100

 Approaches:

 1. Brute Force (Implemented in the code)
    - For each element nums[i], iterate through the array and count how many elements are smaller than nums[i].
    - Time Complexity: O(n^2), where n is the length of nums.
    - Space Complexity: O(n) for the output array.
    - Steps:
      a. Initialize an empty answer array.
      b. For each i from 0 to n-1:
          i.   Initialize count = 0.
          ii.  For each j from 0 to n-1:
                  - If nums[j] < nums[i], increment count.
          iii. Append count to the answer array.
      c. Return the answer array.

 2. Counting Sort Optimization (Not implemented)
    - Since nums[i] is in the range [0, 100], use a counting array to store the frequency of each number.
    - Compute prefix sums to determine how many numbers are smaller than each nums[i].
    - Time Complexity: O(n + k), where k = 101 (the range of possible values).
    - Space Complexity: O(k) for the counting array and O(n) for the output.
    - Steps:
      a. Initialize a count array of size 101 to 0.
      b. Count the frequency of each number in nums.
      c. Compute prefix sums in the count array.
      d. For each nums[i], the answer is count[nums[i] - 1] (if nums[i] > 0), else 0.
      e. Return the answer array.
 */
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] > nums[j] && nums[i] != nums[j])
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};