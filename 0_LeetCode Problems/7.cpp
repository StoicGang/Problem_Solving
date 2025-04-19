/*
Problem: Reverse Integer
- Given a signed 32-bit integer, reverse its digits.
- Return 0 if result overflows 32-bit integer range [-2^31, 2^31 - 1]
- Cannot use 64-bit integers

Input: Signed 32-bit integer x
Output: Integer with digits reversed, or 0 if overflow

Examples:
1. Input: x = 123
    Output: 321
2. Input: x = -123
    Output: -321
3. Input: x = 120
    Output: 21

Approaches:
1. Mathematical approach:
    - Extract digits using modulo
    - Build reversed number while checking overflow
    Time Complexity: O(log x) where x is input number
    Space Complexity: O(1)

2. String conversion:
    - Convert to string
    - Reverse string handling negative sign
    - Convert back checking overflow
    Time Complexity: O(log x) where x is input number
    Space Complexity: O(log x) for string storage
*/

#include <bits/stdc++.h>
using namespace std;

// approach 1
class Solution
{
public:
    int reverse(int x)
    {
        int result = 0;
        while (x != 0)
        {
            int digit = x % 10;
            x /= 10;

            if (result > (INT_MAX / 10) || (result == INT_MAX / 10 && digit > 7))
            {
                return 0;
            }
            if (result < (INT_MIN / 10) || (result == INT_MIN / 10 && digit < -8))
            {
                return 0;
            }

            result = result * 10 + digit;
        }
        return result;
    }
};

// approach 2
int reverse(int x)
{
    string a = to_string(x);
    int start = 0;
    int end = a.length() - 1;

    // if '-' sign present
    if (a[start] == '-')
    {
        start++;
    }

    while (start < end)
    {
        swap(a[start++], a[end--]);
    }

    long long temp = stoll(a);

    if (temp < INT_MIN || temp > INT_MAX)
    {
        return 0;
    }
    return (int)temp;
}