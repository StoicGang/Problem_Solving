/*
345. Reverse Vowels of a String

Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.


Example 1:
Input: s = "IceCreAm"
Output: "AceCreIm"

Explanation:
The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:
Input: s = "leetcode"
Output: "leotcede"
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