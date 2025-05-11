/*
Title: LeetCode 1009 - Complement of Base 10 Integer
Problem: Find the complement of a positive integer in base 10.
The complement is the number you get when you flip all bits in its binary representation.

Input:
- Integer n (0 ≤ n ≤ 10^9)

Output:
- Complement of n (flip all bits in binary representation)

Constraints:
- 0 ≤ n ≤ 10^9
- Input does not contain leading zeros

Approaches:
1. Bit Manipulation (Current Implementation):
   - Find number of bits in input
   - Create mask with all 1s of that length
   - XOR with original number
   - Time: O(log n) - number of bits
   - Space: O(1)

2. Binary String Method (Alternative):
   - Convert to binary string
   - Flip each bit
   - Convert back to integer
   - Time: O(log n)
   - Space: O(log n)

Example:
Input: 5
Output: 2
Explanation:
5 in binary is 101
Complement is   010
010 in decimal is 2
*/

class Solution
{
public:
    int bitwiseComplement(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        unsigned int bitmask = 0;
        int temp = n;

        while (temp != 0)
        {
            bitmask = (bitmask << 1) | 1;
            temp >>= 1;
        }
        int complement = n ^ bitmask;

        return complement;
    }
};