
/*
Title: 1991 : Find the Middle Index in Array

Problem:
Given a 0-indexed integer array nums, find the leftmost middle index. The middle index is an index where the sum of the elements to the left is equal to the sum of the elements to the right. If no such index exists, return -1.

Input:
- nums: vector<int>&
    A non-empty vector of integers.

Output:
- int
    The leftmost middle index if it exists, otherwise -1.

Constraints:
- 1 <= nums.size() <= 100
- -1000 <= nums[i] <= 1000

Approach 1: Prefix Sum (Optimal, O(n) time, O(1) space)
1. Compute the total sum of the array.
2. Initialize leftsum as 0.
3. Iterate through the array:
     a. For each index i, calculate rightsum = totalsum - leftsum - nums[i].
     b. If leftsum == rightsum, return i as the answer.
     c. Add nums[i] to leftsum.
4. If no such index is found, return -1.

Complexity:
- Time Complexity: O(n), where n is the size of nums (single pass to compute total sum, single pass to find the index).
- Space Complexity: O(1), as only a few integer variables are used.
*/
#include <vector>
using namespace std;
class Solution
{
public:
    int findMiddleIndex(vector<int> &nums)
    {
        int totalsum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            totalsum += nums[i];
        }
        int leftsum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int rightsum = totalsum - leftsum - nums[i];
            if (leftsum == rightsum)
            {
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};