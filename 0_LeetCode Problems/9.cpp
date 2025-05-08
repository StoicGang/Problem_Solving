/*
Problem: 9. Palindrome Number
-----------------------------------------
Given an integer x, determine if it is a palindrome number.
A palindrome number reads the same forwards and backwards.

Input:
- x (int): An integer value
- Constraints: -2^31 <= x <= 2^31 - 1

Output:
- Returns true if x is a palindrome number
- Returns false otherwise

Approaches:
1. String Conversion Method (Current Implementation)
    - Convert integer to string
    - Use two pointers (start and end) to compare characters
    - Move pointers towards center while comparing
    Time Complexity: O(log x) - converting to string and comparing digits
    Space Complexity: O(log x) - storing digits in string

2. Mathematical Approach (Implemented)
    - Reverse half of the number
    - Compare original number with reversed half
    - Special handling for negative numbers and numbers ending with 0
    - More memory efficient as it avoids string conversion
    Time Complexity: O(log x) - need to process each digit
    Space Complexity: O(1) - only using constant extra space
*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    string str = to_string(x);
    int start = 0, end = str.length() - 1;
    while (start < end)
    {
        if (str[start++] != str[end--])
        {
            return false;
        }
    }
    return true;
}

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
