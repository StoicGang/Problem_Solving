/*
231. Power of Two

Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.


Example 1:
Input: n = 1
Output: true
Explanation: 20 = 1

Example 2:
Input: n = 16
Output: true
Explanation: 24 = 16

Example 3:
Input: n = 3
Output: false

Constraints:
-2^31 <= n <= 2^31 - 1

*/
#include <bits/stdc++.h>

// bruteforce
bool isPowerOfTwo(int n)
{
    for (int i{0}; i <= 30; i++)
    {
        int result = pow(2, i);
        if (result == n)
        {
            return true;
        }
    }
    return false;
}

// Optimal
bool isPowerOfTwo(int n)
{
    int result{1};
    for (int i{0}; i <= 30; i++)
    {
        if (result == n)
        {
            return true;
        }
        if (result < INT_MAX / 2)
        {
            result = result * 2;
        }
    }
    return false;
}