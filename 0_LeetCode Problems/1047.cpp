/*
Title: LeetCode 1047 - Remove All Adjacent Duplicates In String
Problem: Remove all adjacent duplicate characters in a string, repeatedly.
Two characters are adjacent if they appear consecutively in the string.

Input:
- String s consisting of lowercase English letters

Output:
- String after removing all adjacent duplicates

Constraints:
- 1 ≤ s.length ≤ 10^5
- s consists of lowercase English letters

Approaches:
1. Stack Approach (Current Implementation):
   - Use stack to track characters
   - Pop if current char matches stack top
   - Otherwise push current char
   - Time: O(n)
   - Space: O(n)

2. Two-Pointer Approach (Alternative):
   - Use string itself as stack
   - Track top index
   - Time: O(n)
   - Space: O(1)

3. String Builder (Alternative):
   - Build result string
   - Remove last char if matches current
   - Time: O(n)
   - Space: O(n)

Example:
Input: "abbaca"
Output: "ca"
Explanation:
- Initially: "abbaca"
- Remove "bb": "aaca"
- Remove "aa": "ca"
*/

#include <bits/stdc++.h>

class Solution
{
public:
    std::string removeDuplicates(std::string s)
    {
        int j = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (j > 0 && s[j - 1] == s[i])
            {
                j--;
            }
            else
            {
                s[j] = s[i];
                j++;
            }
        }
        s.resize(j);

        return s;
    }
};