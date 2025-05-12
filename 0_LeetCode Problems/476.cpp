/*
Title: Number Complement

Problem:
- Find complement of a positive integer in base 10
- Flip all bits in binary representation
- No leading zeros in binary representation

Input:
- Positive integer num
- Example: num = 5 (binary: 101)

Output:
- Complement of input number
- Example: 2 (binary: 010)

Constraints:
- 1 <= num < 2^31
- Input has no leading zeros

Approaches:
1. Bit Manipulation (Optimal)
   - Create bitmask with same number of bits
   - XOR with original number to flip bits
   - Handle edge case of num = 0
   Time: O(log n) - number of bits
   Space: O(1)

2. Binary String (Alternative)
   - Convert to binary string
   - Flip each bit
   - Convert back to decimal
   Time: O(log n)
   Space: O(log n)

Time Complexity: O(log n)
Space Complexity: O(1)
*/

// Number Complement

/*
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer num, return its complement.

Example 1:
Input: num = 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.

Example 2:
Input: num = 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.
*/

class Solution
{
public:
    int findComplement(int num)
    {
        unsigned int bitmask{0};
        int temp = num;
        if (num == 0)
        {
            return 0;
        }
        while (temp != 0)
        {
            bitmask = (bitmask << 1) | 1;
            temp >>= 1;
        }
        int complement = num ^ bitmask;
        return complement;
    }
};