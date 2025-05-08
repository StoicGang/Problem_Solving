/*
Problem:
    Given a string S, determine if it can be made into a palindrome by deleting at most one character.
    A palindrome is a string that reads the same forwards and backwards.

Input:
    - String s: The input string to check
    - Length n: Length of the string s

Output:
    - "YES" if string can be made palindrome by deleting at most one character
    - "NO" if it's not possible

Constraints:
    - 1 <= length of string <= 10^5
    - String contains uppercase letters only

Approaches:
    1. Two Pointer + Validation Approach:
       - Use two pointers (left and right) moving inward from ends
       - When mismatch found, try two possibilities:
         a) Skip left character and check remaining is palindrome
         b) Skip right character and check remaining is palindrome
       - If either case works, string can be made palindrome
       Time Complexity: O(n)
       Space Complexity: O(1)

    Helper function check():
    - Takes string reference, start and end positions
    - Returns true if substring is palindrome
    - Used to validate after skipping a character
*/
#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

bool check(string &s, int start, int end)
{
    while (start < end)
    {
        if (s[start++] != s[end--])
        {
            return false;
        }
    }
    return true;
}

bool validPalindrome(int n, string &s)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (s[left] != s[right])
        {
            if (check(s, left + 1, right) || check(s, left, right - 1))
                return true;
            else
                return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string str;
    cin >> str;
    if (validPalindrome(str.length() - 1, str))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}