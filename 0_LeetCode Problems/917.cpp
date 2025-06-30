/*
    917. Reverse Only Letters

    Problem:
    Given a string s, reverse the string according to the following rules:
      - All the characters that are not English letters remain in the same position.
      - All the English letters (lowercase or uppercase) should be reversed.
    Return s after reversing it.

    Input:
      - string s: 1 <= s.length <= 100
      - s consists of characters with ASCII values in the range [33, 122].
      - s does not contain '"' or '\\'.

    Output:
      - string: The string after reversing only the English letters.

    Constraints:
      - 1 <= s.length <= 100
      - s consists of printable ASCII characters except '"' and '\\'.

    Approaches:

    1. Two-Pointer Approach (Implemented)
        - Initialize two pointers, start at the beginning and end at the end of the string.
        - Move start forward until it points to a letter.
        - Move end backward until it points to a letter.
        - Swap the letters at start and end.
        - Repeat until start >= end.
        - Time Complexity: O(n), where n is the length of s.
        - Space Complexity: O(1), in-place modification.

    2. Stack Approach (Alternative)
        - Traverse the string and push all letters onto a stack.
        - Traverse the string again, and for each letter, pop from the stack and replace.
        - Non-letter characters remain in place.
        - Time Complexity: O(n)
        - Space Complexity: O(n), for the stack.

    3. Collect and Reverse (Alternative)
        - Collect all letters in a separate container.
        - Reverse the container.
        - Traverse the string, and for each letter, replace it with the next from the reversed container.
        - Time Complexity: O(n)
        - Space Complexity: O(n), for the container.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{

    bool isValid(char ch)
    {
        return (('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z'));
    }

public:
    string reverseOnlyLetters(string s)
    {
        int start = 0, end = s.length() - 1;
        while (start < end)
        {
            if (!(isValid(s[start])))
            {
                start++;
            }
            else if (!(isValid(s[end])))
            {
                end--;
            }
            else
            {
                swap(s[start++], s[end--]);
            }
        }
        return s;
    }
};