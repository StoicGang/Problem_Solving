/*
Title: Find All Duplicates in an Array

Problem:
- Find all integers that appear twice in array
- Elements in range [1, n] where n is array length
- Must use only O(1) extra space
- Must solve in O(n) time

Input:
- Integer array nums where 1 <= nums[i] <= n
- Example: [4,3,2,7,8,2,3,1]

Output:
- Array containing elements that appear twice
- Example: [2,3]

Constraints:
- n == nums.length
- 1 <= n <= 10^5
- 1 <= nums[i] <= n
- Each element appears once or twice
- Must use constant extra space

Approaches:
1. Array Marking Method (Optimal)
   - Use array elements as indices
   - Mark visited by negating
   - If already negative, number is duplicate
   Time: O(n)
   Space: O(1)

2. Counting Sort Method (Alternative)
   - Count frequencies
   - Return numbers with count 2
   Time: O(n)
   Space: O(n)

Time Complexity: O(n)
Space Complexity: O(1) excluding output array
*/

#include <vector>

using namespace std;

// Brute-Force approach
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> temp;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    temp.push_back(nums[i]);
                    break;
                }
            }
        }
        return temp;
    }
};