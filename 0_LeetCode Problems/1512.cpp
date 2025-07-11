/*
Title: 1512. Number of Good Pairs

Problem:
Given an array of integers nums, return the number of good pairs.
A pair (i, j) is called good if nums[i] == nums[j] and i < j.

Input:
- vector<int> nums: An array of integers.

Output:
- int: The number of good pairs.

Constraints:
- 1 <= nums.length <= 100
- 1 <= nums[i] <= 100

Approaches:

1. Brute Force (Nested Loops):
    - For each pair (i, j) with i < j, check if nums[i] == nums[j].
    - Time Complexity: O(n^2)
    - Space Complexity: O(1)

2. Hash Map / Frequency Array:
    - Count the frequency of each number.
    - For each number with frequency f, add f * (f - 1) / 2 to the result.
    - Time Complexity: O(n)
    - Space Complexity: O(1) (since nums[i] <= 100, use a fixed-size array)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j] && i < j)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        unordered_map<int, int> count;
        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }
        int goodPair = 0;
        for (int i = 0; i < count.size(); i++)
        {
            goodPair += count[i] * (count[i] - 1) / 2;
        }
        return goodPair;
    }
};