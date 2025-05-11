/*
Title: Factorial Calculator
Problem:
    Calculate the factorial of a given positive integer N.
    The factorial is the product of all positive integers less than or equal to N.

Input:
    - Single integer N

Output:
    - Factorial of N

Constraints:
    - 0 ≤ N ≤ 20
    - Output value will fit in signed 64-bit integer

Approaches:
1. Recursive Approach (Current Implementation)
    - Base case: if n < 1, return 1
    - Recursive case: n * factorial(n-1)
    Time Complexity: O(N)
    Space Complexity: O(N) due to recursive call stack

2. Iterative Approach (Alternative)
    - Use loop to multiply numbers from 1 to N
    - Handle overflow cases
    Time Complexity: O(N)
    Space Complexity: O(1)

Example:
Input: 5
Output: 120
Explanation: 5! = 5 * 4 * 3 * 2 * 1 = 120
*/
#include <iostream>
using namespace std;

int factorial(int n)
{
    // Base case
    if (n < 1)
        return 1;

    // Recursive case
    return n * factorial(n - 1);
}

int main()
{
    int num;
    cin >> num; // Reading input from STDIN
    cout << factorial(num);
}