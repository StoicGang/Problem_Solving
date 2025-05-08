/*
 Count Set Bits Problem

 Given a number N, count the number of set bits (1s) in its binary representation.

 Input:
 - First line contains T (number of test cases)
 - Each test case consists of a single integer N

 Output:
 - For each test case, print the count of set bits in N

 Approaches:
 1. Bit Manipulation (Current Implementation):
    - Right shift number and check last bit
    - Time Complexity: O(log n) where n is input number
    - Space Complexity: O(1)

 2. Brian Kernighan's Algorithm (Alternative):
    - Use n&(n-1) to clear rightmost set bit
    - Time Complexity: O(number of set bits)
    - Space Complexity: O(1)

 3. Lookup Table (Alternative):
    - Precompute set bits for all numbers
    - Time Complexity: O(1)
    - Space Complexity: O(n)
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