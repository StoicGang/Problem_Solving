/*
Title: Two Sum
Problem: Given an array of integers nums and an integer target, return indices of the two numbers in nums such that they add up to target.

Input:
- nums: Vector of integers (e.g., [2,7,11,15])
- target: Integer target sum (e.g., 9)

Output:
- Vector of two integers representing indices (e.g., [0,1])

Constraints:
- 2 <= nums.length <= 10^4
- -10^9 <= nums[i] <= 10^9
- -10^9 <= target <= 10^9
- Only one valid answer exists
- Same element cannot be used twice

Approaches:
1. Brute Force:
   - Use nested loops to check every pair
   - Time: O(n²)
   - Space: O(1)

2. Hash Map (Optimal):
   - Store complements in hash map
   - Single pass through array
   - Time: O(n)
   - Space: O(n)

Example:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: nums[0] + nums[1] = 2 + 7 = 9
*/

// brute force approach
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> temp;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    temp.push_back(i);
                    temp.push_back(j);
                }
            }
        }
        return temp;
    }
};
