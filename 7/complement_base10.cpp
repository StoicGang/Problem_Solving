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

int complement_size(int num)
{
    if (num == 0)
    {
        cout << 1; // Edge case: Complement of 0 is 1
        return 0;
    }

    // Calculate the number of bits required
    int numBits = log2(num) + 1;

    // Create a bitmask with all bits set to 1
    int bitmask = (1 << numBits) - 1;

    // Compute complement
    int complement = num ^ bitmask;

    return complement;
}

int main()
{
    int num;
    cin >> num;
    cout << "Complement of number : " << complement_bitmask(num) << endl;
    cout << "Using size based complement : " << complement_size(num) << endl;
    return 0;
}
