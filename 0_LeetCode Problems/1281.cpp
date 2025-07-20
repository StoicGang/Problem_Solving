/*
Title: 1281 Subtract the Product and Sum of Digits of an Integer

Problem:
- Given an integer n
- Calculate product of its digits
- Calculate sum of its digits
- Return difference (product - sum)

Input:
- Integer n
- Example: n = 234

Output:
- Difference between product and sum of digits
- Example: 15 (as 2*3*4 - (2+3*4) = 24 - 9 = 15)

Constraints:
- 1 <= n <= 10^5
- n contains only positive digits

Approaches:
1. Iterative Digit Extraction
   - Extract digits using modulo and division
   - Calculate product and sum simultaneously
   - Return difference
   Time: O(log n) - number of digits
   Space: O(1)

2. String Conversion (Alternative)
   - Convert to string
   - Process each character as digit
   - Calculate product and sum
   Time: O(log n)
   Space: O(log n)

Time Complexity: O(log n)
Space Complexity: O(1)
*/


class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int product = 1;
        int sum = 0;
        while (n != 0)
        {
            int remainder = n % 10;
            product = product * remainder;
            sum = sum + remainder;
            n = n / 10;
        }
        int result = product - sum;
        return result;
    }
};

class Solution
{
private:
    int productOfDigits(int n)
    {
        if (n == 0)
            return 1;
        return (n % 10) * productOfDigits(n / 10);
    }

    int sumOfDigits(int n)
    {
        if (n == 0)
            return 0;
        return (n % 10) + sumOfDigits(n / 10);
    }

public:
    int subtractProductAndSum(int n)
    {
        return productOfDigits(n) - sumOfDigits(n);
    }
};