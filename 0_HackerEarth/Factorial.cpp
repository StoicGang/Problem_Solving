
/*
Problem: Calculate factorial of a given number N
The factorial of a positive integer N is the product of all positive integers less than or equal to N.

Input:
- A single integer N

Output:
- Factorial of N

Approach:
- Using recursive approach to calculate factorial
- For any number n, factorial is calculated as: n * (n-1)!
- Base case: if n < 1, return 1 (factorial of 0 is 1)
- Recursive case: multiply current number with factorial of (n-1)

Example:
Input: 5
Output: 120
Calculation: 5 * 4 * 3 * 2 * 1 = 120

Time Complexity: O(N) - function is called recursively N times
Space Complexity: O(N) - recursive call stack depth of N
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