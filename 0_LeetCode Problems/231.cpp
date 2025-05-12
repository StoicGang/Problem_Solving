/*
Title: Power of Two

Problem:
- Determine if given integer is a power of two
- Number n is power of two if n = 2^x for some x

Input:
- Integer n
- Example: 1, 16, 3

Output:
- Boolean: true if n is power of 2, false otherwise
- Example: true (2^0), true (2^4), false

Constraints:
- -2^31 <= n <= 2^31 - 1
- Must handle negative numbers and zero

Approaches:
1. Bit Manipulation (Optimal)
   - Powers of 2 have exactly one '1' bit
   - n & (n-1) will be 0 for powers of 2
   Time Complexity: O(1)
   Space Complexity: O(1)

2. Loop Method
   - Keep dividing by 2 while even
   - Check if final result is 1
   Time Complexity: O(log n)
   Space Complexity: O(1)

3. Direct Check (Alternative)
   - Check if n is in set {2^0, 2^1, ..., 2^30}
   Time Complexity: O(1)
   Space Complexity: O(1)
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