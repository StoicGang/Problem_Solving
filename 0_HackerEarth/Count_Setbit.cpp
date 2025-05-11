/*
Title: Count Set Bits
Problem: Count the number of 1s in the binary representation of a given number.

Input:
- T: Number of test cases (1 <= T <= 10^4)
- N: Integer for each test case (0 <= N <= 10^9)

Output:
- For each test case, print a single integer representing the count of set bits

Constraints:
- 1 <= T <= 10^4
- 0 <= N <= 10^9
- Time limit: 1 second
- Memory limit: 256 MB

Approaches:
1. Naive Approach (Right Shift):
   - Right shift number and check last bit using &1
   - Count set bits
   - Time: O(log N) - number of bits
   - Space: O(1)

2. Brian Kernighan's Algorithm:
   - Use N & (N-1) to clear rightmost set bit
   - Count iterations until N becomes 0
   - Time: O(number of set bits)
   - Space: O(1)

3. Lookup Table:
   - Precompute bit count for smaller numbers
   - Process number in chunks
   - Time: O(1) for 32-bit numbers
   - Space: O(256) for lookup table

Example:
Input:
2
4
15

Output:
1
4

Explanation:
4 = 100 (binary) -> 1 set bit
15 = 1111 (binary) -> 4 set bits
*/

#include <iostream>
using namespace std;

int setBitcount(int n)
{
    int count{0};
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int num;
    cin >> num;
    while (num != 0)
    {
        int N;
        cin >> N;
        cout << setBitcount(N);
        num--;
    }
}