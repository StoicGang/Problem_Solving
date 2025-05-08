/*
 Problem: Reverse a given integer by treating it as a string using recursion

 Input:
 - A string 'num' containing digits representing an integer

 Output:
 - Returns the reversed string representation of the input number

 Time Complexity:
 - Time: O(n/2) where n is the length of string, as we process half the string length
 - Space: O(n) due to recursive call stack

 Example:
 Input: "1234"
 Output: "4321"
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