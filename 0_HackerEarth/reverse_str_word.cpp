/*
Title: Reverse Each Word in a String

Problem:
    Given a string containing words separated by spaces, reverse each word while maintaining
    the word order in the sentence. The goal is to create a secret message by reversing
    each word individually.

Input:
    - A string 'str' containing words separated by single spaces
    - Example: "Let's take the HackerEarth contest"

Output:
    - String with each word reversed but maintaining original word order
    - Example: "s'teL ekat eht htraErekcaH tsetnoc"

Constraints:
    - 1 <= str.length <= 10^5
    - String contains only ASCII characters
    - Words are separated by single spaces
    - No leading or trailing spaces in input string

Approach:
    1. Initialize empty result string 'ans' and temporary string 'word'
       Time: O(1), Space: O(1)

    2. Iterate through input string using two pointers i,j
       - j finds end of current word
       - Build current word by pushing chars to 'word'
       Time: O(n), where n = string length

    3. For each word:
       - Reverse the characters in 'word'
       - Add space to 'ans' if not first word
       - Append reversed word to 'ans'
       - Clear 'word' for next iteration
       Time: O(w) per word, where w = word length

    4. Return final reversed string
       Total Time: O(n), Space: O(n)
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverse_string(string &str)
{
    string ans;
    int i = 0, j = 0;
    string word;
    while (j < str.length())
    {
        while (j < str.length() && str[j] != ' ')
        {
            word.push_back(str[j]);
            j++;
        }
        reverse(word.begin(), word.end());
        if (!ans.empty())
            ans += ' ';
        ans += word;
        word.clear();
        if (j < str.length() && str[j] == ' ')
            j++;
    }
    return ans;
}

int main()
{
    string str;
    getline(cin, str);
    string reversed = reverse_string(str);
    cout << reversed;
    return 0;
}