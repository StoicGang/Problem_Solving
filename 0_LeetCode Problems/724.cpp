/*
Title: Find Pivot Index

Problem:
- Find leftmost pivot index in array
- Pivot index is where sum of all numbers strictly to left
  equals sum of all numbers strictly to right

Input:
- Integer array nums
- Example: [1,7,3,6,5,6]

Output:
- Leftmost pivot index (-1 if no pivot exists)
- Example: 3 (as sum(left=[1,7,3]) = sum(right=[5,6]) = 11)

Constraints:
- 1 <= nums.length <= 10^4
- -1000 <= nums[i] <= 1000
- Return leftmost pivot if multiple exist

Approach:
1. Prefix Sum Method
   - Calculate total sum
   - Track leftSum while iterating
   - rightSum = totalSum - leftSum - current
   - If leftSum == rightSum, found pivot
   - Update leftSum for next iteration

Time Complexity: O(n)
Space Complexity: O(1)
*/

// Bruteforce

int findpivot(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int leftsum = 0, rightsum = 0;
        for (int j = 0; j < i; j++)
        {
            leftsum += arr[j];
        }
        for (int j = i + 1; j < n; j++)
        {
            rightsum += arr[j];
        }
        if (leftsum == rightsum)
        {
            return i;
        }
    }
    return -1;
}

int findpivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int rightsum = 0, leftsum = 0;
    for (int i = 0; i < n; i++)
    {
        rightsum = rightsum + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        rightsum -= arr[i];
        if (rightsum == leftsum)
        {
            return i;
        }
        leftsum += arr[i];
    }
    return -1;
}