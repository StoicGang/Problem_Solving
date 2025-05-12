/*
Title: Letter Combinations of a Phone Number

Problem:
- Given string of digits from 2-9
- Return all possible letter combinations
- Each digit maps to letters like phone keypad
- Return combinations in any order

Input:
- String containing digits 2-9
- Example: "23"

Output:
- Vector of all possible letter combinations
- Example: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Constraints:
- 0 <= digits.length <= 4
- digits[i] is a digit in range ['2','9']
- Mapping: 2->abc, 3->def, 4->ghi, 5->jkl,
          6->mno, 7->pqrs, 8->tuv, 9->wxyz

Approaches:
1. Backtracking (DFS)
   - Map digits to letters
   - Generate combinations recursively
   - Build string by choosing one letter per digit
   Time: O(4^n) where n is digits length
   Space: O(n) for recursion stack

2. Iterative Solution
   - Start with empty string
   - For each digit, append each possible letter
   Time: O(4^n)
   Space: O(1) excluding output

Time Complexity: O(4^n)
Space Complexity: O(n) for recursion stack
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void solve(string digits, string output, int index, vector<string> &ans, string mapping[])
    {
        // base case
        if (index >= digits.length())
        {
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string value = mapping[number];
        for (int i = 0; i < value.length(); i++)
        {
            output.push_back(value[i]);
            solve(digits, output, index + 1, ans, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.length() < 1)
        {
            return ans;
        }
        string output;
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};