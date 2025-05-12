/*
Title: Count Primes

Problem:
- Count prime numbers less than n
- Prime number has exactly two factors: 1 and itself
- Return count of prime numbers strictly less than n

Input:
- Integer n
- Example: n = 10

Output:
- Count of prime numbers less than n
- Example: 4 (primes are 2, 3, 5, 7)

Constraints:
- 0 <= n <= 5 * 10^6
- Must handle large inputs efficiently

Approaches:
1. Sieve of Eratosthenes (Optimal)
   - Create boolean array for numbers up to n
   - Mark multiples of each prime as non-prime
   - Count unmarked numbers
   Time: O(n log log n)
   Space: O(n)

2. Square Root Optimization
   - Check divisibility up to sqrt(n)
   - Not efficient for large n
   Time: O(n * sqrt(n))
   Space: O(1)

Time Complexity: O(n log log n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>

using namespace std;

int countPrimes(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    return count;
}