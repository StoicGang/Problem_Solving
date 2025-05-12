/*
 Title: Missing Number

 Problem:
 Given an array nums containing n distinct numbers in the range [0, n],
 return the only number in the range that is missing from the array.

 Input:
 - nums: An integer array of size n containing distinct numbers from 0 to n,
    with exactly one number missing
 - The array size is n, meaning the range is [0, n]

 Output:
 - The missing number in the range [0, n]

 Constraints:
 - n == nums.length
 - 1 <= n <= 10^4
 - 0 <= nums[i] <= n
 - All numbers in nums are distinct

 Approaches:
 1. Mathematical Sum:
     - Calculate expected sum of range [0,n] and subtract array sum
     - Formula: n*(n+1)/2 - sum(array)
     - Time: O(n), Space: O(1)

 2. Sum and Square Sum:
     - Calculate sum and square sum differences
     - Get sum difference: diff = aSum - nSum
     - Get square sum difference: sqDiff = aSqSum - nSqSum
     - Missing number = (sum - diff)/2
     - Time: O(n), Space: O(1)

 3. Marking Method:
     - Mark visited numbers by making them negative
     - Traverse array and mark nums[abs(nums[i])-1] as negative
     - First positive number's index is the missing number
     - Time: O(n), Space: O(1)
     - Note: This modifies the original array

 4. Cyclic Sort:
     - Place each number at its correct position (nums[i] should be at i+1)
     - Swap numbers until correct positions are achieved
     - First mismatch index is the missing number
     - Time: O(n), Space: O(1)

 5. XOR Approach:
     - XOR all numbers from 0 to n with array elements
     - XOR operation will cancel out pairs
     - Remaining number is the missing one
     - Time: O(n), Space: O(1)
     - Most efficient as it works in single pass without arithmetic operations
*/
#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums)
{
    int N = nums.size();
    int totalSum = N * (N + 1) / 2;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    return totalSum - sum;
}
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int nSum = 0, nSqSum = 0;
    for (int i = 0; i <= n; i++)
    {
        nSum += i;
        nSqSum += i * i;
    }
    int aSum = 0, aSqSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        aSum += nums[i];
        aSqSum += nums[i] * nums[i];
    }
    int diff = aSum - nSum;
    int Sqdiff = aSqSum - nSqSum;
    int sum = Sqdiff / diff;
    return ((sum - diff) / 2); // for find the repeating we use (sum + diff)/2;
}

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int index = abs(nums[i]);
        if (nums[index - 1] > 0)
        {
            nums[index - 1] *= -1;
        }
    }
    // all the positives indices are missing
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            return i;
        }
    }
}

int misingNumber(vector<int> &nums)
{
    int i = 0;
    int n = nums.size();
    int miss = -1;
    while (i < n)
    {
        int index = nums[i] - 1;
        if (nums[i] != nums[index])
        {
            swap(nums[i], nums[index]);
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        miss = nums[i];
        break;
    }
    return miss;
}