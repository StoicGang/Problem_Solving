/*
Title: Complement of Base 10 Integer

Problem:
- Find complement of base 10 integer
- Flip all bits in binary representation
- Ignore leading zeros in binary form

Input:
- Non-negative integer n
- Example: n = 5 (binary: 101)

Output:
- Complement of input number
- Example: 2 (binary: 010)

Constraints:
- 0 <= n <= 10^9
- Must handle edge case of n = 0

Approaches:
1. Bit Manipulation (Optimal)
   - Create mask with same number of bits
   - XOR with original number
   - Handle edge case of n = 0
   Time: O(log n)
   Space: O(1)

2. String Conversion
   - Convert to binary string
   - Flip each bit
   - Convert back to decimal
   Time: O(log n)
   Space: O(log n)

Time Complexity: O(log n)
Space Complexity: O(1)
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