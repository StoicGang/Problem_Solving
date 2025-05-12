/*
Title: Pow(x, n)

Problem:
- Implement pow(x, n)
- Calculate x raised to power n
- Handle negative exponents

Input:
- Double x (base)
- Integer n (exponent)
- Example: x = 2.00000, n = 10

Output:
- Double result of x^n
- Example: 1024.00000

Constraints:
- -100.0 < x < 100.0
- -2^31 <= n <= 2^31-1
- -10^4 <= x^n <= 10^4
- n can be negative

Approaches:
1. Binary Exponentiation (Optimal)
   - Break down n into binary representation
   - Square x for each set bit
   - Handle negative exponent by reciprocal
   Time: O(log n)
   Space: O(1)

2. Recursive Solution
   - Use x^n = x^(n/2) * x^(n/2)
   - Handle odd n separately
   Time: O(log n)
   Space: O(log n)

3. Direct Library Method
   - Use std::pow function
   Time: Implementation dependent
   Space: O(1)

Time Complexity: O(log n)
Space Complexity: O(1) iterative, O(log n) recursive
*/

#include <cmath>

class Solution
{
public:
    double myPow(double x, int n)
    {
        double result = pow(x, n);
        return result;
    }
};