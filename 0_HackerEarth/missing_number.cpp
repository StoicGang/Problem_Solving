/*
Title: Find Missing Number
Problem:
    Given an array containing n-1 numbers from 1 to n,
    find the one missing number in O(n) time and O(1) space.

Input:
    - Array size n-1
    - Array elements (1 to n with one number missing)

Output:
    - The missing number from 1 to n

Constraints:
    - 1 ≤ n ≤ 10⁵
    - 1 ≤ Array elements ≤ n
    - Each number appears exactly once except one missing number
    - No duplicates in array

Approaches:
1. XOR Method (Current Implementation):
    - XOR all numbers from 1 to n
    - XOR all array elements
    - Final XOR gives missing number
    Time: O(n)
    Space: O(1)

2. Sum Method (Alternative):
    - Calculate expected sum = n*(n+1)/2
    - Calculate actual array sum
    - Difference is missing number
    Time: O(n)
    Space: O(1)
    Note: May have integer overflow for large n

3. Sorting Method (Alternative):
    - Sort array in ascending order
    - Find first position where arr[i] ≠ i+1
    Time: O(n log n)
    Space: O(1)

Example:
Input: n = 5, arr = [1, 2, 4, 5]
Output: 3 (missing number)
*/

#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
}

int findMiss(vector<int> &a, int num)
{
    // approaches ==> sum
    //  int totalsum = num * (num + 1) / 2;
    //  int sum = 0;
    //  for (int i = 0; i < a.size(); i++)
    //  {
    //      sum += a[i];
    //  }
    //  return totalsum - sum;

    // approaches ==> marking
    int i = 0;
    while (i < a.size())
    {
        int index = abs(a[i]) - 1;
        if (index < a.size() && a[index] > 0)
        {
            a[index] *= -1;
        }
        i++;
    }
    for (int j = 0; j < a.size(); j++)
    {
        if (a[j] > 0)
        {
            return j + 1;
        }
    }

    // sorting and swapping
    // int i = 0;
    // while (i < a.size())
    // {
    //     int index = a[i] - 1;
    //     if (a[i] != a[index])
    //     {
    //         swap(a[i], a[index]);
    //     }
    //     i++;
    // }
    // for (int j = 0; j < a.size(); j++)
    // {
    //     if (a[j] != j + 1)
    //     {
    //         return j + 1 ;
    //     }
    // }
}

int main()
{
    int num;
    cin >> num;
    vector<int> a(num);
    input(a);
    cout << findMiss(a, num);
}