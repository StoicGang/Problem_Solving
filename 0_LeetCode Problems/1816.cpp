/*
Title: 1816. Truncate Sentence

Problem:
Given a sentence s and an integer k, truncate the sentence such that it contains only the first k words.
Words in the sentence are separated by a single space, with no leading or trailing spaces.

Input:
- s: string (1 <= s.length <= 500)
- k: int (1 <= k <= number of words in s)

Output:
- string: The sentence truncated to its first k words.

Constraints:
- s consists only of uppercase/lowercase English letters and single spaces.
- Words are separated by exactly one space.
- No punctuation, no leading/trailing spaces.
- k is at least 1 and at most the total number of words in s.

Approach 1: Iterative Scan (Implemented)
    1. Traverse the sentence character by character.
    2. Track the number of spaces encountered to count words.
    3. Stop when k words are captured.
    4. Return substring from the start up to that point.
    - Time: O(n)
    - Space: O(1)

Approach 2: Split and Join (Alternative)
    1. Split the sentence by space into an array of words.
    2. Take the first k words and rejoin with spaces.
    - Time: O(n)
    - Space: O(n)

Both approaches work efficiently, but the implemented scan is more space-optimized for large strings.
*/

#include <string>
using namespace std;
class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        if (s.length() <= k)
        {
            return s;
        }
        int length = 0;
        int words = 1;
        for (int i = 0; i < s.size(); i++)
        {
            // if (words > k)
            // {
            //     length--;
            //     break;
            // }
            // else
            // {
            //     if (s[i] == ' ')
            //     {
            //         words++;
            //     }
            //     length++;
            // }
            if (s[i] == ' ')
            {
                words++;
                if (words > k)
                    break;
            }
        }
        return s.substr(0, length);
    }
};