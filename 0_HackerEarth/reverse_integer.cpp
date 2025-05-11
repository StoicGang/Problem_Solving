/*
Title: Reverse Integer String
Problem:
    Given a string containing digits, reverse it recursively.
    The string can only contain numeric digits.

Input:
    - String containing digits (e.g. "12345")

Output:
    - String with digits reversed (e.g. "54321")

Constraints:
    - String contains only numeric digits [0-9]
    - 1 ≤ String length ≤ 10⁵
    - No leading zeros

Approaches:
1. Recursive String Reversal (Current):
    - Base case: string length <= 1
    - Recursively reverse substring (start+1 to end)
    - Append first character at end
    Time: O(n)
    Space: O(n) due to recursion stack

2. Iterative Two-Pointer (Alternative):
    - Use two pointers (start and end)
    - Swap characters until pointers meet
    Time: O(n)
    Space: O(1)

3. Using Stack (Alternative):
    - Push all characters to stack
    - Pop and build reversed string
    Time: O(n)
    Space: O(n)

Example:
Input: "54321"
Output: "12345"
*/

#include <iostream>
using namespace std;

string reverse(string str, int start, int end)
{
    if (start >= end)
    {
        return str;
    }
    swap(str[start], str[end]);
    return reverse(str, start + 1, end - 1);
}

int main()
{
    string num;
    cin >> num;
    cout << reverse(num, 0, num.length() - 1);
    return 0;
}