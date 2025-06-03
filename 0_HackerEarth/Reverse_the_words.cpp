/*
 Title: Reverse Words in a String

 Problem:
 Given a string containing words separated by spaces, reverse the order of words
 while maintaining the order of characters within each word.

 Input:
 - A single line containing multiple words separated by single spaces
 - Input string can contain alphabets and spaces

 Output:
 - Print the string with words in reversed order
 - Words should maintain their original character order
 - Words should be separated by single spaces

 Constraints:
 - Time Limit: 5 seconds
 - Memory Limit: 256 MB
 - 1 <= Length of string <= 10^4
 - String contains only alphabets and spaces

 Approach 1 (Current Implementation):
 1. Traverse string from right to left
 2. Build each word by concatenating characters until space is found
 3. When space encountered, add word to result with space
 4. Add final word to result
 Time Complexity: O(n) where n is length of string
 Space Complexity: O(n) for storing result string

 Alternative Approaches:

 Approach 2:
 1. Split string into vector of words
 2. Reverse the vector
 3. Join words with spaces
 Time Complexity: O(n)
 Space Complexity: O(n)

 Approach 3:
 1. Reverse entire string
 2. Reverse each individual word
 Time Complexity: O(n)
 Space Complexity: O(1) if done in-place
 */

#include <iostream>
#include <string>
using namespace std;

string reverses(string str)
{
    string result;
    string word;

    // Traverse the string from end to start
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] != ' ')
        {
            word = str[i] + word;
        }
        else if (!word.empty())
        {
            if (!result.empty())
                result += " ";
            result += word;
            word = "";
        }
    }
    // Add the first word
    if (!word.empty())
    {
        if (!result.empty())
            result += " ";
        result += word;
    }
    return result;
}

string reverse_in_place(string str)
{
    // reverse the entire string
    int start = 0, end = str.length() - 1;
    while (start < end)
    {
        swap(str[start++], str[end--]);
    }
    // reverse each word
    start = 0;
    while (start < str.length())
    {
        int j = start;
        while (j < str.length() && str[j] != ' ')
        {
            j++;
        }
        int wordEnd = j - 1;
        while (start < wordEnd)
        {
            swap(str[start++], str[wordEnd--]);
        }
        start = j + 1;
    }
    return str;
}

int main()
{
    string str;
    getline(cin, str);
    string result = reverses(str);
    string result2 = reverse_in_place(result);
    cout << result << endl;
    cout << result2;
}