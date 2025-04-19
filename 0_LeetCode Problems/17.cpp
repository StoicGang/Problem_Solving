/*
17. Letter Combinations of a Phone Number

Problem:
    Given a string of digits from 2-9, generate all possible letter combinations that the number
    could represent on a phone keypad, similar to old phone buttons where each number maps to
    multiple letters.

Input:
    - digits: string containing digits from 2-9
    - digits can be empty
    - 0 <= digits.length <= 4

Output:
    - Vector of strings containing all possible letter combinations
    - Empty vector if input string is empty

Example:
    Input: "23"
    Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

    Input: ""
    Output: []

    Input: "2"
    Output: ["a","b","c"]

Approach:
    1. Create a mapping of digits to their corresponding letters
    2. Use recursive backtracking to generate all combinations:
        - For each digit, try all possible letters it maps to
        - Add each letter to current combination
        - Recursively process remaining digits
        - Backtrack by removing last added letter
    3. Base case: when all digits are processed, add current combination to result

Time Complexity: O(4^n), where n is the length of input string
    - Each digit can map to 3-4 letters
    - We try all possibilities for each digit position

Space Complexity: O(n), where n is the length of input string
    - Recursive call stack depth equals input length
    - Not counting space needed for output array
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