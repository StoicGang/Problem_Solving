/**
 Problem: Two Sum - Find indices of two numbers in array that add up to target

 Input:
 - nums: Vector of integers
 - target: Target sum to find

 Output:
 - Vector containing two indices whose elements sum to target

 Constraints:
 - 2 <= nums.length <= 10^4
 - -10^9 <= nums[i] <= 10^9
 - -10^9 <= target <= 10^9
 - Exactly one valid solution exists
 - Same element cannot be used twice

Approach:
 - Use nested loops to check all possible pairs
 - For each element i, check with all elements j after it
 - If nums[i] + nums[j] equals target, return their indices

Complexity:
 - Time: O(n^2) where n is array length
 - Space: O(1) constant space
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
