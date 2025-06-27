/*
Title: 496. Next Greater Element I

Problem:
Given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2,
for each element in nums1, find the next greater element in nums2. The next greater element of x in nums2
is the first element to the right of x in nums2 that is greater than x. If it does not exist, return -1 for that element.

Input:
- nums1: vector<int> (subset of nums2, all elements unique)
- nums2: vector<int> (all elements unique, superset of nums1)

Output:
- vector<int> ans, where ans[i] is the next greater element of nums1[i] in nums2, or -1 if it does not exist.

Constraints:
    - 1 <= nums1.length <= nums2.length <= 1000
    - 0 <= nums1[i], nums2[i] <= 10^4
    - All integers in nums1 and nums2 are unique.
    - All the integers of nums1 also appear in nums2.

Approach 1: Brute Force (Implemented)
    Step 1: For each element in nums1, find its index in nums2. (O(n2))
    Step 2: From that index, scan to the right in nums2 to find the next greater element. (O(n2))
    Step 3: If found, add it to the answer; otherwise, add -1.
    Time Complexity: O(n1 * n2), where n1 = nums1.size(), n2 = nums2.size()
    Space Complexity: O(1) extra (excluding output)

Approach 2: Stack + Hash Map (Optimal, Not Implemented)
    Step 1: Traverse nums2 from left to right, using a stack to keep track of decreasing elements.
    Step 2: For each element, pop from the stack until the stack is empty or the top is greater than the current element.
    Step 3: For each popped element, record the current element as its next greater in a hash map.
    Step 4: For each element in nums1, look up its next greater element in the hash map.
    Time Complexity: O(n1 + n2)
    Space Complexity: O(n2) for the hash map and stack

*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int findNextGreater(vector<int> &nums, int index)
    {
        for (int i = index + 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[index])
            {
                return nums[i];
            }
        }
        return -1;
    }
    int findIndex(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
        }
        return -1;
    }

public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            int indexInNum2 = findIndex(nums2, nums1[i]);
            int nextNum = findNextGreater(nums2, indexInNum2);
            ans.push_back(nextNum);
        }
        return ans;
    }
};