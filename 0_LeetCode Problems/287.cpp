/*
287. Find the Duplicate Number

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and using only constant extra space.



Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3
Example 3:

Input: nums = [3,3,3,3,3]
Output: 3*/

#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &nums)
{
    int ans = -1;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        ans ^= nums[i];
    }
    return ans;
}

int findDuplicate(vector<int> &nums)
{
    int ans = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);

        if (nums[index] < 0)
        { // If already negative, it's the duplicate
            ans = index;
            break;
        }

        nums[index] *= -1; // Mark the number as visited
    }

    return ans;
}
int findDuplicate(vector<int> &nums)
{
    vector<int> count(nums.size(), 0);
    for (int num : nums)
    {
        count[num]++; // Count occurrences
    }
    return distance(count.begin(), max_element(count.begin(), count.end()));
}