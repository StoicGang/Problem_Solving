/*
Title: Remove All Adjacent Duplicates In String

Problem:
- Remove all adjacent duplicate characters in string
- Keep removing until no adjacent duplicates exist
- Return final string

Input:
- String s containing lowercase English letters
- Example: "abbaca"

Output:
- String after removing all adjacent duplicates
- Example: "ca"

Constraints:
- 1 <= s.length <= 10^5
- s consists of lowercase English letters

Approaches:
1. Stack Method (Optimal)
   - Use string/stack to build result
   - Compare current char with top of stack
   - Pop if matching, push if different
   Time: O(n)
   Space: O(n)

2. Two Pointer (Alternative)
   - Use result string as stack
   - Track top index
   - Add/remove chars based on matches
   Time: O(n)
   Space: O(n)

Time Complexity: O(n)
Space Complexity: O(n)
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