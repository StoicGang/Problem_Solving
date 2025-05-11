/*
Title: Prime Array Triplet Counter
Problem:
    Given an array of integers, find the count of triplets (i,j,k) such that
    their product is a prime number.

Input:
    - First line: Number of test cases T
    - For each test case:
        * Line 1: Array size N
        * Line 2: N space-separated integers

Output:
    - For each test case:
        * Single integer representing count of triplets whose product is prime

Constraints:
    - 1 ≤ T ≤ 100
    - 3 ≤ N ≤ 100 (Array size)
    - 1 ≤ Array elements ≤ 100

Approaches:
1. Brute Force with Prime Check (Current Implementation):
    - Generate all possible triplets using three nested loops
    - For each triplet, check if their product is prime
    - Time: O(N³ * sqrt(P)) where P is max possible product
    - Space: O(1)

2. Optimized Approach (Potential):
    - Precompute prime numbers up to max possible product
    - Use sieve for prime generation
    - Time: O(N³ + P*log(log P))
    - Space: O(P) where P is max possible product

Example:
Input:
1
5
1 2 3 4 5
Output:
4
Explanation: Triplets with prime product: (2,2,5), (2,3,3), (2,3,5), (3,3,3)
*/

#include <iostream>
using namespace std;

bool isPrime(long num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int solve(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (isPrime(arr[i] * arr[j] * arr[k]))
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int num;
    cin >> num;
    while (num != 0)
    {
        int size = 0;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << solve(arr, size) << endl;
        num--;
    }
}