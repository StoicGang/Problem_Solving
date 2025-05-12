/*
Title: Reverse String

Problem:
- Reverse a string in-place
- Given as array of characters
- Must modify array in-place with O(1) extra memory

Input:
- Vector of characters s
- Example: ["h","e","l","l","o"]

Output:
- Same vector with characters reversed
- Example: ["o","l","l","e","h"]

Constraints:
- 1 <= s.length <= 10^5
- s[i] is a printable ascii character
- Must modify input array in-place
- Must use only O(1) extra memory

Approach:
1. Two-pointer technique
   - Initialize start = 0, end = length-1
   - While start <= end:
     * Swap characters at start and end
     * Increment start, decrement end
   - Continue until pointers meet

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>

class Solution
{
public:
    void reverseString(std::vector<char> &s)
    {
        int start = 0;
        int end = s.size() - 1;
        while (start <= end)
        {
            std::swap(s[start++], s[end--]);
        }
    }
};