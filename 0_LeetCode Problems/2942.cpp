
/*
 Title: 2942. Find Words Containing Character

 Problem:
 Given a 0-indexed array of strings `words` and a character `x`, return an array of indices representing the words that contain the character `x`.
 The returned array may be in any order.

 Input:
 - words: vector<string> - An array of lowercase English words.
 - x: char - A lowercase English character to search for.

 Output:
 - vector<int> - An array of indices of words containing the character `x`.

 Constraints:
 - 1 <= words.length <= 50
 - 1 <= words[i].length <= 50
 - x is a lowercase English letter.
 - words[i] consists only of lowercase English letters.

 Example 1:
 Input:  words = ["leet","code"], x = 'e'
 Output: [0, 1]

 Example 2:
 Input:  words = ["abc","bcd","aaaa","cbc"], x = 'a'
 Output: [0, 2]

 Example 3:
 Input:  words = ["abc","bcd","aaaa","cbc"], x = 'z'
 Output: []

 Approaches:
 1. Brute Force (Implemented):
    - For each word in the array, check if the character `x` is present.
    - If present, add the index to the result array.
    - Time Complexity: O(N * M), where N = number of words, M = average length of each word.
    - Space Complexity: O(K), where K = number of words containing `x` (for the output array).

 2. Using Standard Library (Alternative):
    - For each word, use `std::find` or `std::string::find` to check for the presence of `x`.
    - Time Complexity: O(N * M), similar to brute force, but potentially faster due to optimized library functions.
    - Space Complexity: O(K).

 3. Preprocessing (Not needed for constraints):
    - For larger constraints, could preprocess each word into a set for O(1) lookup, but for current constraints, brute force is optimal.
 */
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    bool is_present(string word, char x)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == x)
            {
                return true;
            }
        }
        return false;
    }

public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++)
        {
            if (is_present(words[i], x))
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

// using the STL
class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++)
        {
            if (words[i].find(x) != string::npos)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};