/*
Title: 448. Find All Numbers Disappeared in an Array

Problem:
Find all integers in range [1,n] that are missing from an array of n integers where each element is in range [1,n].

Input:
- nums: Vector of integers where each element is in range [1,n]
- n: Length of input array nums

Output:
- Vector containing all missing integers in range [1,n]

Constraints:
- n == nums.length
- 1 <= n <= 10^5
- 1 <= nums[i] <= n

Approach:
1. Use array elements as indices and mark presence by making elements negative
    - Iterate through array
    - For each element, mark nums[element-1] as negative
    - Time: O(n), Space: O(1)

2. Find missing numbers by checking positive elements
    - Iterate again and check which indices still have positive values
    - Those indices+1 are the missing numbers
    - Time: O(n), Space: O(1)

3. Using Cyclic Sort
    - Place each number at its correct index (nums[i] should be at index nums[i]-1)
    - Iterate through array, swap numbers until each is in correct position
    - Numbers that aren't at their correct position (nums[i] != i+1) indicate missing values
    - Time: O(n), Space: O(1)

Overall Complexity:
- Time Complexity: O(n)
- Space Complexity: O(1) (excluding output array)

Note: This solution modifies the input array but meets the follow-up challenge
of using O(1) extra space.
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> findDisappearedNumbers(vector<int> &nums)
{
    vector<int> temp;
    int i = 0;
    while (i < nums.size())
    {
        int index = abs(nums[i]) - 1;
        if (index < nums.size() && nums[index] > 0)
        {
            nums[index] *= -1;
        }
        i++;
    }
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] > 0)
        {
            temp.push_back(j + 1);
        }
    }
    return temp;
}

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    vector<int> temp;
    int i = 0;
    while (i < nums.size())
    {
        int index = abs(nums[i]) - 1;
        if (nums[i] != nums[index])
        {
            swap(nums[i], nums[index]);
        }
        else
        {
            i++;
        }
    }
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != j + 1)
        {
            temp.push_back(j + 1);
        }
    }
    return temp;
}