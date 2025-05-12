/*
Title: Fibonacci Number

Problem:
- Calculate nth Fibonacci number
- F(n) = F(n-1) + F(n-2)
- Base cases: F(0) = 0, F(1) = 1

Input:
- Integer n (nth Fibonacci number to calculate)
- Example: n = 4

Output:
- nth Fibonacci number
- Example: 3 (as F(4) = F(3) + F(2) = 2 + 1 = 3)

Constraints:
- 0 <= n <= 30
- Answer guaranteed to fit in 32-bit integer

Approaches:
1. Iterative (Optimal)
   - Use two variables for previous numbers
   - Build up to nth number
   Time: O(n)
   Space: O(1)

2. Recursive (Simple but inefficient)
   - Directly implement F(n) = F(n-1) + F(n-2)
   - Use base cases F(0) = 0, F(1) = 1
   Time: O(2^n)
   Space: O(n) for recursion stack

3. Dynamic Programming (Alternative)
   - Store previously calculated values
   - Build up to nth number
   Time: O(n)
   Space: O(n)

Time Complexity: O(n) for iterative, O(2^n) for recursive
Space Complexity: O(1) for iterative, O(n) for recursive
*/

// 1
int fib(int n)
{
    int a = 0, b = 1, NextNum = 0;
    if (n == 0)
    {
        return a;
    }
    if (n == 1)
    {
        return b;
    }
    for (int i = 2; i <= n; i++)
    {
        NextNum = a + b;
        a = b;
        b = NextNum;
    }
    return NextNum;
}

// 2
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}