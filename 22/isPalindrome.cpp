#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string &s)
{
    int start = 0, end = s.length() - 1;
    while (start <= end)
    {
        if (s[start++] != s[end--])
        {
            return false;
        }
    }
    return true;
}

bool isPalindromeC(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;
    while (start <= end)
    {
        if (str[start++] != str[end--])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "MugiwaraYa";
    char str[] = "asdffdsa";
    cout << "Is palindrome :" << isPalindrome(s);
    cout << "\nIs palindrome : " << boolalpha << isPalindromeC(str);
}