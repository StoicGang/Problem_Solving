/*
Title: Find the Duplicate Number

Problem:
- Find the one repeated number in array
- Array contains n+1 integers where each integer is in range [1,n]
- Must not modify array
- Must use only constant extra space

Input:
- Vector of integers nums where one number is repeated
- Example: [1,3,4,2,2]

Output:
- The repeated number
- Example: 2

Constraints:
- 1 <= n <= 10^5
- nums.length = n + 1
- 1 <= nums[i] <= n
- Only one number appears more than once
- Must not modify array
- Must use O(1) extra space

Approaches:
1. XOR Method
    - Sort array and XOR elements
    - Returns XOR of all elements
    Time: O(nlogn)
    Space: O(1)

2. Negative Marking
    - Mark visited numbers by making them negative
    - First negative encountered is duplicate
    Time: O(n)
    Space: O(1) but modifies array

3. Counting Array
    - Count frequency in separate array
    - Return index with maximum count
    Time: O(n)
    Space: O(n)

4. Cycle Detection with Swap
    - Swap numbers until cycle is found
    - Similar to Floyd's but with swapping
    Time: O(n)
    Space: O(1) but modifies array

5. Sorting and Linear Scan
    - Sort array and check adjacent elements
    - Return when duplicate found
    Time: O(nlogn)
    Space: O(1)

6. Floyd's Tortoise and Hare
    - Treat array as linked list where nums[i] points to index nums[i]
    - Use slow and fast pointers to find cycle
    - Find cycle entrance point
    Time: O(n)
    Space: O(1)

Time Complexity: O(n) for best approaches
Space Complexity: O(1) for optimal solution
*/

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
int findDuplicate(vector<int> &nums)
{
    while (nums[0] != nums[nums[0]])
    {
        swap(nums[0], nums[nums[0]]);
    }
    return nums[0];
}
int findDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return nums[i];
        }
    }
    return -1;
}