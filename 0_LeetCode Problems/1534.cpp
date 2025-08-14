/*
Title: 1534. Count Good Triplets

Problem:
Given an array of integers arr, and three integers a, b, and c, find the number of good triplets.
A triplet (arr[i], arr[j], arr[k]) is good if:
    0 <= i < j < k < arr.length
    |arr[i] - arr[j]| <= a
    |arr[j] - arr[k]| <= b
    |arr[i] - arr[k]| <= c

Input:
- arr: vector<int>, the array of integers
- a, b, c: integers, the constraints for the absolute differences

Output:
- int, the number of good triplets

Constraints:
- 3 <= arr.length <= 100
- 0 <= arr[i] <= 1000
- 0 <= a, b, c <= 1000

Approaches:

1. Brute Force (Triple Nested Loops)
     - Iterate over all possible triplets (i, j, k) with i < j < k.
     - For each triplet, check if all three conditions are satisfied.
     - Count the number of valid triplets.
     - Time Complexity: O(n^3), where n is the length of arr.
     - Space Complexity: O(1).

2. Optimized Approaches
     - For this problem, due to small constraints (n <= 100), brute force is efficient enough.
     - Further optimizations (e.g., prefix sums, segment trees) are unnecessary and would add complexity without significant performance gain.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countGoodTriplets(vector<int> &arr, int a, int b, int c)
    {
        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                for (int k = j + 1; k < arr.size(); k++)
                {
                    if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};