/**
 title Even or Odd Number Checker

 problem
 Determine if given numbers are even or odd

 input
 - First line: T (number of test cases)
 - Next T lines: Each contains a number N

 output
 - For each test case:
   Print "EVEN" if N is even
   Print "ODD" if N is odd

 constraints
 - 1 <= T <= 10
 - 0 <= N <= 10^9

 approach
 1. Read number of test cases T
 2. For each test case:
    - Read number N
    - Check if N is divisible by 2 using modulo operator or bitwise operator
    - Print appropriate output

 Time Complexity: O(T) where T is number of test cases
 Space Complexity: O(1) as only constant extra space is needed
 */

#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while (num != 0)
    {
        int n;
        cin >> n;
        if (n & 1)
        {
            cout << "ODD" << endl;
        }
        else
        {
            cout << "EVEN" << endl;
        }
        num--;
    }
    return 0;
}