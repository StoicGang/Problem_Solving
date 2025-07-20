/*
Title: 03 Longest Substring Without Repeating Characters

Problem:
- Given a string s, find the length of the longest substring without any repeating characters
- Substring must be contiguous, not a subsequence

Input:
- String s consisting of letters, digits, symbols, and spaces
- Examples:
    s = "abcabcbb"
    s = "bbbbb"
    s = "pwwkew"

Output:
- Integer representing the length of the longest valid substring
- Examples:
    Output: 3 (substring "abc")
    Output: 1 (substring "b")
    Output: 3 (substring "wke")

Constraints:
- 0 <= s.length <= 5 * 10⁴
- s may contain English letters, digits, symbols, and spaces

Approaches:
1. Sliding Window (Optimal)
   - Use two pointers to represent the current window
   - Use hash map to track last index of each character
   - Move start pointer when duplicate is found within window
   Time: O(n)
   Space: O(k) where k = charset size

2. Brute Force
   - Check all substrings starting at every index
   - Use set to check for duplicates
   Time: O(n²)
   Space: O(k)

Time Complexity: O(n)
Space Complexity: O(k)
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int start = 0, end = 0;
        int maxLen = 0;
        unordered_map<char, int> map;
        while (end < s.length())
        {
            if (map.find(s[end]) != map.end() && map[s[end]] >= start)
            {
                start = map[s[end]] + 1;
            }
            map[s[end]] = end;
            int currentLen = end - start + 1;
            maxLen = max(maxLen, currentLen);
            end++;
        }
        return maxLen;
    }
};