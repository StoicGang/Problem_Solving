/*
First Missing Positive Integer

Problem:
Find the first missing positive integer in an array containing both positive and negative integers.
The solution should run in O(n) time and use O(1) extra space.

Input:
- arr[]: Array of integers (can contain positive, negative numbers and zero)
- n: Size of the array

Output:
- Returns the first missing positive integer

Constraints:
- 1 <= n <= 10^6
- -10^9 <= arr[i] <= 10^9

Approaches:
1. Naive Approach:
    Steps:
    - Sort the array in ascending order
    - Iterate through array and track expected positive number
    - Return first mismatch between expected and actual
    Time: O(nlogn), Space: O(1)

2. Hash Table Approach:
    Steps:
    - Create a hash set/map
    - Insert all positive numbers into hash table
    - Iterate from 1 to n checking presence in hash table
    - Return first missing number
    Time: O(n), Space: O(n)

3. Index Marking Approach (Current Implementation):
    Steps:
    - Replace negatives/zeros/numbers > n with n+1
    - For each valid number i, mark arr[i-1] as negative
    - First positive number's index + 1 is the answer
    - If all negative, return n+1
    Time: O(n), Space: O(1)

Example:
Input: [3,4,-1,1]
Output: 2

Note: This solution modifies the input array to achieve O(1) space complexity
*/
#include <bits/stdc++.h>
using namespace std;

int firstMissing(int arr[], int n)
{
    // Step 1: Replace negative numbers and zeros with a large value
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 0 || arr[i] > n)
            arr[i] = n + 1;
    }

    // Step 2: Use index as a marker
    for (int i = 0; i < n; i++)
    {
        int num = abs(arr[i]);
        if (num <= n)
        {
            arr[num - 1] = -abs(arr[num - 1]); // Mark as found
        }
    }

    // Step 3: Find the first positive index
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            return i + 1;
    }

    return n + 1; // If all numbers from 1 to n are present
}

int main()
{
    int arr[10] = {3, 4, -1, 1};
    cout << firstMissing(arr, 4);
    return 0;
}