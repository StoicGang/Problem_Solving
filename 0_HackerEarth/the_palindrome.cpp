/*
Problem:
    Check if given string is palindrome or not for 'n' test cases.

Input:
    - First line contains number of test cases (n)
    - Next n lines contain strings to check

Output:
    - For each test case, print "Yes" if string is palindrome, "No" otherwise

Approaches:
    1. Two-pointer method
       - Compare characters from start and end, moving towards center
       - Time Complexity: O(n) where n is length of string
       - Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str)
{
    int start = 0, end = str.length() - 1;
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
    int n;
    cin >> n;
    cin.ignore();
    while (n != 0)
    {
        string str;
        getline(cin, str);
        if (isPalindrome(str))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
        n--;
    }
    return 0;
}