/*
Title: Character Removal from String
Problem:
    Given a string and a character x, write a function to remove all occurrences
    of x from the string. Leave string unchanged if character not found.

Input:
    - Line 1: Input string str
    - Line 2: Character x to remove

Output:
    - String with all occurrences of character x removed

Constraints:
    - 1 <= str.length <= 10^6
    - str contains only ASCII characters
    - Time Limit: 1 second
    - Memory Limit: 256 MB

Approaches:
1. Linear Traversal (Current Implementation):
    - Create empty result string
    - Traverse input string character by character
    - If current character != x, append to result
    - Time: O(n) where n is string length
    - Space: O(n) for result string

Examples:
Input:
"welcome to coding ninjas"
'o'
Output:
"welcme t cding ninjas"

Input:
"aabccbaa"
'a'
Output:
"bccb"
*/
#include <iostream>
using namespace std;

string remove_char(string str, char ch)
{
    string ans;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ch)
        {
            ans.push_back(str[i]);
        }
    }
    return ans;
}

int main()
{
    string str;
    getline(cin, str);
    char ch;
    cin >> ch;
    string result = remove_char(str, ch);
    cout << result;
}