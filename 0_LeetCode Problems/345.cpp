/*
Title: Reverse Vowels of a String

Problem:
- Reverse only the vowels in a given string
- Keep all other characters in their original positions
- Vowels are 'a', 'e', 'i', 'o', 'u' (case insensitive)

Input:
- String s containing ASCII characters
- Example: "hello", "leetcode"

Output:
- String with vowels reversed, other chars unchanged
- Example: "holle", "leotcede"

Constraints:
- 1 <= s.length <= 3 * 10^5
- s consists of printable ASCII characters
- Must handle both uppercase and lowercase vowels

Approach:
1. Two-pointer technique with vowel check
   - Initialize start = 0, end = length-1
   - While start < end:
     * Skip non-vowels from both ends
     * When both vowels found, swap them
     * Move pointers towards center
   - Check both upper and lowercase vowels

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>

class Solution
{
private:
    bool valid_char(char ch)
    {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }

public:
    std::string reverseVowels(std::string s)
    {
        int start = 0;
        int end = s.length() - 1;
        while (start <= end)
        {
            // both start and end have vowel
            if (valid_char(s[start]) && valid_char(s[end]))
            {
                std::swap(s[start], s[end]);
                start++;
                end--;
            }
            // start have vowel
            else if (valid_char(s[start]))
            {
                end--;
            }
            // end have vowel
            else
            {
                start++;
            }
        }
        return s;
    }
};