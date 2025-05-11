/*
Title: The Palindrome Checker
Problem: Determine if given strings are palindromes for multiple test cases.
A palindrome reads the same forwards and backwards (ignoring case).

Input:
- First line: Integer T (number of test cases)
- Next T lines: Each contains a string S to check

Output:
- For each test case, print "Yes" if string is palindrome, "No" otherwise

Constraints:
- 1 ≤ T ≤ 10
- 1 ≤ |S| ≤ 100
- String contains only lowercase letters [a-z]
- No spaces or special characters

Approaches:
1. Two-Pointer Method (Current Implementation):
   - Compare characters from both ends moving inwards
   - Stop if mismatch found
   - Time: O(n/2) where n is string length
   - Space: O(1)

2. Recursive Approach (Alternative):
   - Base case: string length 0 or 1
   - Compare first and last char, recurse for substring
   - Time: O(n/2)
   - Space: O(n) due to recursive stack

3. String Reversal (Alternative):
   - Create reverse of string
   - Compare with original
   - Time: O(n)
   - Space: O(n)

Example:
Input:
3
aba
abc
aa

Output:
Yes
No
Yes

Explanation:
- "aba" reads same backwards -> Yes
- "abc" reads "cba" backwards -> No
- "aa" reads same backwards -> Yes
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