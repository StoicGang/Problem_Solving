/*
Title: Sqrt(x)

Problem:
- Compute and return square root of x
- Round down to nearest integer
- Must not use built-in sqrt functions

Input:
- Non-negative integer x
- Example: x = 8

Output:
- Integer square root rounded down
- Example: 2 (as sqrt(8) = 2.82842...)

Constraints:
- 0 <= x <= 2^31 - 1
- Must return floor of square root
- No built-in exponential/sqrt functions

Approaches:
1. Binary Search (Optimal)
   - Search space: 1 to x/2
   - Check mid*mid against x
   - Handle overflow using long long
   Time: O(log x)
   Space: O(1)

2. Newton's Method
   - Start with x/2
   - Iteratively improve guess
   - r = (r + x/r) / 2
   Time: O(log x)
   Space: O(1)

Time Complexity: O(log x)
Space Complexity: O(1)
*/

class Solution
{
public:
    long long int binary_search(int x)
    {
        long long int start = 0, end = x, ans = -1;
        long long int mid = start + (end - start) / 2;
        while (start <= end)
        {
            long long int square = mid * mid;
            if (square == x)
            {
                return mid;
            }
            else if (square < x)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return ans;
    }

    int mySqrt(int x)
    {
        return binary_search(x);
    }
};