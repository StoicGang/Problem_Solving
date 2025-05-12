/*
Title: Reverse Integer

Problem:
- Given a signed 32-bit integer
- Reverse its digits
- Return 0 if reversed number overflows 32-bit integer range

Input:
- Signed 32-bit integer x
- Example: 123, -123, 120

Output:
- Integer with digits reversed
- 0 if result overflows
- Example: 321, -321, 21

Constraints:
- -2^31 <= x <= 2^31 - 1
- Cannot use 64-bit integers
- Must handle overflow cases

Approaches:
1. Mathematical Approach
   - Extract digits using modulo
   - Build reversed number while checking overflow
   - Handle negative numbers separately
   Time Complexity: O(log|x|) - number of digits
   Space Complexity: O(1)

2. String Conversion (Alternative)
   - Convert to string, handle sign
   - Reverse string
   - Convert back to integer, check overflow
   Time Complexity: O(log|x|)
   Space Complexity: O(log|x|)
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