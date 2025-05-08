/*
Problem:
    Given first n natural numbers with one missing number, find the missing number.
    For example: If n=10, and numbers are 1,6,4,9,2,3,10,8,7 then missing number is 5.

Input:
    - First line contains n (total numbers including missing one)
    - Second line contains (n-1) space separated integers representing numbers from 1 to n with one missing

Output:
    - Single integer representing the missing number

Constraints:
    - 1 <= n <= 10^5
    - All numbers are distinct
    - All numbers are in range [1,n]
    - Exactly one number is missing from the sequence

Approach:
    1. Mathematical Sum Method (Used in code)
       - Calculate sum of first n natural numbers using formula: n*(n+1)/2
       - Calculate sum of given numbers
       - Difference gives missing number
       Time Complexity: O(n)
       Space Complexity: O(1)

    2. Alternative Approach (Not implemented)
       - XOR all numbers from 1 to n
       - XOR all given numbers
       - Result gives missing number
       Time Complexity: O(n)
       Space Complexity: O(1)

    3. Brute Force Approach
       - Sort the array in ascending order
       - Iterate through array and check if arr[i] equals i+1
       - First position where arr[i] != i+1 is the missing number
       Time Complexity: O(nlogn) due to sorting
       Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
}

int findMiss(vector<int> &a, int num)
{
    int totalsum = num * (num + 1) / 2;
    int sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
    }
    return totalsum - sum;
}

int main()
{
    int num;
    cin >> num;
    vector<int> a(num - 1);
    input(a);
    cout << findMiss(a, num);
}