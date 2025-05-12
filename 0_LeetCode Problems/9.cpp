/*
Title: Palindrome Number

Problem:
- Determine if integer is palindrome
- Number is palindrome if reads same forward and backward
- Solve without converting to string

Input:
- Integer x
- Example: 121, -121, 10

Output:
- Boolean indicating if x is palindrome
- Example: true, false, false

Constraints:
- -2^31 <= x <= 2^31 - 1
- Should handle negative numbers
- Should not convert to string

Approaches:
1. Reverse Half Number (Optimal)
   - Reverse second half of number
   - Compare with first half
   - Handle middle digit for odd length
   Time: O(log x)
   Space: O(1)

2. Full Reversal
   - Reverse entire number
   - Compare with original
   Time: O(log x)
   Space: O(1)

3. String Conversion (Not Allowed)
   - Convert to string
   - Check palindrome property
   Time: O(log x)
   Space: O(log x)

Time Complexity: O(log x)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    // Handle negative numbers and numbers ending with 0
    if (x < 0 || (x != 0 && x % 10 == 0))
    {
        return false;
    }

    int reversed = 0;
    // Reverse half of the number
    while (x > reversed)
    {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    // For even number of digits: x == reversed
    // For odd number of digits: x == reversed/10
    return x == reversed || x == reversed / 10;
}
