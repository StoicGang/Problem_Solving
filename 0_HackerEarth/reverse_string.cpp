/*
Title: Reverse a String

Problem:
- Given a string as input, reverse the characters in the string
- Example: "INDIA" -> "AIDNI"

Input:
- A single line containing a string str (1 <= |str| <= 10^4)
- String can contain alphanumeric characters, spaces and special characters

Output:
- Print "The string after reversing is: " followed by the reversed string

Constraints:
- 1 <= Length of string <= 10^4
- String can contain any ASCII characters

Approach:
1. Take input string using getline()
2. In reversed() function:
    - Use two pointers i and j pointing to start and end of string
    - While i <= j:
      - Swap characters at i and j
      - Increment i, decrement j
    - Return the reversed string
3. Print the reversed string

Time Complexity: O(n) where n is length of string
Space Complexity: O(1) as we are modifying string in-place

Alternative Approaches:
1. Using STL reverse():
    - std::reverse(str.begin(), str.end())
    - Time: O(n), Space: O(1)

2. Using stack:
    - Push all characters to stack
    - Pop and store in new string
    - Time: O(n), Space: O(n)
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reversed(string str)
{
    int i = 0, j = str.length() - 1;
    while (i <= j)
    {
        swap(str[i++], str[j--]);
    }
    return str;
}

string reversedS(string str)
{
    reverse(str.begin(), str.end());
    return str;
}

int main()
{
    string str;
    getline(cin, str);
    cout << "The string after reversing is: " << reversed(str) << endl;
    return 0;
}