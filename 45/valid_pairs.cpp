/*
Title: Valid Pairs
Problem: Check if an array can be divided into pairs where sum of each pair gives remainder M when divided by K
Input:
    - Array of integers (arr)
    - Size of array (n)
    - Integer K (divisor)
    - Integer M (required remainder)
Output:
    - True if valid pairs exist, False otherwise
Constraints:
    - 1 <= N <= 10^5
    - 1 <= ARR[i] <= 10^9
    - 1 <= K <= 10^5
    - 0 <= M < K
Approaches:
    1. Using Remainder Count Method
       - Count frequency of remainders when divided by K
       - Check if remainders can form valid pairs
       - Time Complexity: O(n)
       - Space Complexity: O(K)
*/

#include <iostream>
#include <vector>
using namespace std;

bool isValidPair(vector<int> &arr, int n, int k, int m)
{
    vector<int> count(k, 0);
    for (int i = 0; i < n; i++)
    {
        int remainder = arr[i] % k;
        count[remainder]++;
    }
    for (int r = 0; r < k; r++)
    {
        int c = (m - r + k) % k;

        // Make sure we don't double-check pairs (r, c) and (c, r)
        if (r > c)
            continue;

        if (r == c)
        {
            // Special case: pairing same remainders, check even count
            if (count[r] % 2 != 0)
                return false;
        }
        else
        {
            if (count[r] != count[c])
                return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int k, m;
        cin >> k >> m;

        if (isValidPair(arr, n, k, m))
        {
            cout << "True\n";
        }
        else
        {
            cout << "False\n";
        }
    }

    return 0;
}