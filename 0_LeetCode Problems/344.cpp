/*
344. Reverse String

Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
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