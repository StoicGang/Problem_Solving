
/**
 * Title: 2367. Number of Arithmetic Triplets
 *
 * Problem:
 * Given a 0-indexed, strictly increasing integer array nums and a positive integer diff,
 * return the number of unique arithmetic triplets (i, j, k) such that:
 *   - i < j < k
 *   - nums[j] - nums[i] == diff
 *   - nums[k] - nums[j] == diff
 *
 * Input:
 *   - nums: vector<int>, strictly increasing, 3 <= nums.length <= 200, 0 <= nums[i] <= 200
 *   - diff: int, 1 <= diff <= 50
 *
 * Output:
 *   - int: Number of unique arithmetic triplets in nums with difference diff.
 *
 * Constraints:
 *   - 3 <= nums.length <= 200
 *   - 0 <= nums[i] <= 200
 *   - 1 <= diff <= 50
 *   - nums is strictly increasing
 *
 * Approaches:
 *
 * 1. Brute Force (Triple Nested Loops)
 *    - For each possible triplet (i, j, k) with i < j < k:
 *        - Check if nums[j] - nums[i] == diff and nums[k] - nums[j] == diff.
 *        - If so, increment the count.
 *    - Time Complexity: O(n^3), where n = nums.size()
 *    - Space Complexity: O(1)
 *
 * 2. Hash Set Optimization (Not implemented in this code)
 *    - Store all nums in a hash set for O(1) lookups.
 *    - For each number x in nums:
 *        - Check if (x + diff) and (x + 2*diff) exist in the set.
 *        - If so, increment the count.
 *    - Time Complexity: O(n)
 *    - Space Complexity: O(n)
 *
 * 3. Two Pointers or Binary Search (Not implemented in this code)
 *    - For each i, use binary search or two pointers to find valid j and k.
 *    - Time Complexity: O(n^2 log n) or O(n^2)
 *    - Space Complexity: O(1)
 *
 * Note: The current implementation uses the brute force approach (Approach 1).
 */
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int arithmeticTriplets(vector<int> &nums, int diff)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] - nums[i] == diff)
                {
                    for (int k = j + 1; k < nums.size(); k++)
                    {
                        if (nums[k] - nums[j] == diff)
                        {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};