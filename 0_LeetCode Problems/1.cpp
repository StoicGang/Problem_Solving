/*
Title: Two Sum

Problem:
- Find two numbers in array that add up to target
- Return indices of these two numbers
- Exactly one solution exists

Input:
- Array of integers nums
- Integer target sum
- Example: nums = [2,7,11,15], target = 9

Output:
- Vector of two integers (indices)
- Example: [0,1] (as 2 + 7 = 9)

Constraints:
- 2 <= nums.length <= 10^4
- -10^9 <= nums[i] <= 10^9
- -10^9 <= target <= 10^9
- Exactly one valid answer exists
- Same element cannot be used twice

Approaches:
1. Hash Map (Optimal)
   - Store complement in hash map
   - Check if current number's complement exists
   Time: O(n)
   Space: O(n)

2. Two Pointers (If sorted)
   - Sort array (track original indices)
   - Use two pointers from ends
   Time: O(n log n)
   Space: O(n)

3. Brute Force
   - Check all pairs of numbers
   Time: O(n^2)
   Space: O(1)

Time Complexity: O(n)
Space Complexity: O(n)
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
