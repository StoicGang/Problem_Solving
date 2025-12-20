/*
Title: Base 10 Integer Complement

Problem:
    Given an integer N, find its complement. The complement of a number is the number obtained by replacing all 0s with 1s and 1s with 0s in its binary representation.

Input:
    - A single integer N

Output:
    - Complement of the given number N

Constraints:
    - 0 <= N <= 10^9

Approaches:

1. Using Bitmask (complement_bitmask):
    Step 1: Handle edge case when num = 0, return 1
    Step 2: Create a bitmask by left shifting and OR operation
        - Start with bitmask = 0
        - While num > 0:
            * Left shift bitmask by 1 and OR with 1
            * Right shift num by 1
    Step 3: XOR the original number with bitmask to get complement
    Time Complexity: O(log n) - where n is the input number
    Space Complexity: O(1)

2. Using Size Calculation (complement_size):
    Step 1: Handle edge case when num = 0, return 1
    Step 2: Calculate number of bits using log2(num) + 1
    Step 3: Create bitmask by left shifting 1 by numBits and subtract 1
    Step 4: XOR the original number with bitmask to get complement
    Time Complexity: O(1)
    Space Complexity: O(1)

Example:
    Input: 5
    Binary: 101
    Output: 2
    Binary of complement: 010
*/
#include <iostream>
#include <math.h>
using namespace std;

int complement_bitmask(int num)
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

int complement(int sum)
{
    if (sum == 0)
        return 1; // 1. Edge case
    int temp = sum;
    int mask = 0;
    while (temp != 0)
    {
        temp = temp >> 1;       // 2. Reduce temp to find length
        mask = (mask << 1) + 1; // 3. Build mask of 1s
    }
    return (sum ^ mask); // 4. Flip bits
}

int complement_size(int num)
{
    if (num == 0)
    {
        return 1; // Edge case: Complement of 0 is 1
    }

    // Calculate the number of bits required
    int numBits = log2(num) + 1;

    // Create a bitmask with all bits set to 1
    int bitmask = (1 << numBits) - 1;

    // Compute complement
    int complement = num ^ bitmask;

    return complement;
}

int bitwiseComplement(int n)
{
    // 1. Edge Case: 0 is special, handle it first
    if (n == 0)
        return 1;

    // 2. Create a copy to turn into our Mask
    int mask = n;

    // 3. The "Smearing" Process
    // Copy the 1s down to the right, doubling the range each time.
    mask = mask | (mask >> 1);  // Fills neighbor
    mask = mask | (mask >> 2);  // Fills next 2
    mask = mask | (mask >> 4);  // Fills next 4
    mask = mask | (mask >> 8);  // Fills next 8
    mask = mask | (mask >> 16); // Fills next 16 (Covers 32-bit integers)

    // At this point, if n was 5 (101), mask is now 7 (111).
    // If n was 10 (1010), mask is now 15 (1111).

    // 4. Final XOR
    return n ^ mask;
}

int main()
{
    int num;
    cin >> num;
    // cout << "Complement of number : " << complement_bitmask(num) << endl;
    // cout << "Using size based complement : " << complement_size(num) << endl;
    // cout << "Complement of number: " << complement(num) << endl;

    cout << "complement : " << bitwiseComplement(num) << endl;
    return 0;
}
