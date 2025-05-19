/*
Title: Even or Odd without Modulus
Problem: Determine if a given number is even or odd without using the modulus operator
Input:
- First line: T (number of test cases)
- Next T lines: Each contains a number N to check

Output:
- For each test case, print "EVEN" if N is even, "ODD" if N is odd

Constraints:
- 1 <= T <= 10
- 0 <= N <= 10^9

Approaches:
1. Using Bitwise AND (&) operator
    - Check if last bit is set (1) or unset (0)
    - If last bit is 1, number is odd
    - If last bit is 0, number is even
    - Time Complexity: O(1)
    - Space Complexity: O(1)

2. Using Division (Alternative approach)
    - Divide number by 2
    - If remainder is 0, number is even
    - If remainder is 1, number is odd
    - Time Complexity: O(1)
    - Space Complexity: O(1)

3. Using Recursion (Alternative approach)
    - Subtract 2 until number becomes 0 or 1
    - If 0, number is even
    - If 1, number is odd
    - Time Complexity: O(n)
    - Space Complexity: O(n)

Note: Current implementation uses Approach 1 (Bitwise AND)
        as it is most efficient with O(1) complexity
*/
#include <iostream>
using namespace std;

bool isEven(int n)
{
    if (n & 1)
    {
        return false;
    }
    return true;
}

// recursion
bool isOdd(int n)
{
    if (n == 0)
    {
        return false;
    }
    if (n == 1)
    {
        return true;
    }
    isOdd(n - 2);
}

int main()
{
    int num;
    cin >> num;
    while (num != 0)
    {
        int n;
        cin >> n;
        if (!isOdd(n))
        {
            cout << "EVEN" << endl;
        }
        else
        {
            cout << "ODD" << endl;
        }
        num--;
    }
}