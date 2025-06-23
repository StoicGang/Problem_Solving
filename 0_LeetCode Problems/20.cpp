/*
title 20. Valid Parentheses

problem
Determine if a string containing only bracket characters is valid according to these rules:
- Open brackets must be closed by the same type of brackets
- Open brackets must be closed in correct order
- Every close bracket has corresponding open bracket of same type

input
string s - A string containing only characters: '(', ')', '{', '}', '[', ']'

output
bool - true if string is valid, false otherwise

constraints
- 1 <= s.length <= 10^4
- s consists of parentheses only '()[]{}'

approaches

1. Stack-based Solution
        Steps:
        - Create an empty vector to act as a stack
        - Iterate through each character in string:
            > If char is opening bracket ('(', '{', '['), push to stack
            > If char is closing bracket:
                * Check if stack is empty (invalid case)
                * Compare with top bracket in stack
                * If matching pair found, pop from stack
                * If not matching, return false
        - Return true if stack is empty, false otherwise
        Time: O(n), Space: O(n)

2. HashMap + Stack Solution
        Steps:
        - Create hashmap mapping closing to opening brackets
        - Use stack to track opening brackets
        - For each char:
            > If opening bracket, push to stack
            > If closing bracket:
                * Check if stack empty or top doesn't match
                * Pop if matches
        Time: O(n), Space: O(n + m) where m is bracket types

3. Count-based Solution (only for single bracket type)
        Steps:
        - Maintain count of opening brackets
        - Increment for opening, decrement for closing
        - Return false if count goes negative
        - Check if final count is zero
        Time: O(n), Space: O(1)
*/
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        vector<char> vec;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                vec.push_back(c);
            }
            else
            {
                if (vec.empty())
                    return false;
                char top = vec.back();
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{'))
                {
                    return false;
                }
                vec.pop_back();
            }
        }
        return vec.empty();
    }
};