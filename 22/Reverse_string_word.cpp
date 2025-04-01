#include <bits/stdc++.h>

using namespace std;

void reverse(string &s, int start, int end)
{
    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
}

string remove_extra(string &s)
{
    int n = s.length();
    int i = 0, j = 0;
    // leading spaces
    while (i < n && s[i] == ' ')
    {
        i++;
    }
    // Remove extra spaces in between
    while (i < n)
    {
        if (s[i] != ' ' || (j > 0 && s[j - 1] != ' '))
        {
            s[j++] = s[i];
        }
        i++;
    }
    // back spaces
    if (j > 0 && s[j - 1] == ' ')
    {
        j--;
    }

    return s.substr(0, j);
}

string reverseString(string &str)
{
    int n = str.length();
    // reverse entire string first
    reverse(str, 0, n - 1);

    // Reverse each word
    int start = 0, end = 0;
    while (end < n)
    {
        // lets find the end of each word
        while (end < n && str[end] != ' ')
        {
            end++;
        }
        // reverse the word now
        reverse(str, start, end - 1);

        // for next word
        start = end + 1;
        end = start;
    }
    return remove_extra(str);
}

int main()
{
    string s = "You are a fool StrawHat, but an honest one! ";
    cout << "Original String : ";
    cout << s;
    cout << "\nReversed string : ";
    cout << reverseString(s);
}