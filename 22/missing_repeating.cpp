/*
Problem:
    Find the missing and repeating number in an array of size n containing numbers from 1 to n.

Input:
    - arr: Vector of integers containing numbers from 1 to n with one missing and one repeating number
    - n: Size of the array

Output:
    - pair<int,int>: First element is missing number, second element is repeating number

Constraints:
    - 1 <= n <= 10^5
    - 1 <= arr[i] <= n
    - Each element appears exactly once except for one element which appears twice
    - One number from 1 to n is missing
    Example:
        Input: arr = [1, 3, 3], n = 3
        Output: {2, 3}
        Explanation: 3 appears twice and 2 is missing from array

Approaches:

1. Using Sum and Sum of Squares Method:
   Time: O(n), Space: O(1)
   - Calculate expected sum (1 to n) and sum of squares
   - Find actual sum and sum of squares of array elements
   - Use equations to find missing and repeating numbers

2. Using XOR Method:
   Time: O(n), Space: O(1)
   - XOR all numbers from 1 to n with array elements
   - Find rightmost set bit in XOR result
   - Divide elements into two groups
   - Find missing and repeating by comparing groups

3. Using Marking Method:
   Time: O(n), Space: O(1)
   - Mark visited elements as negative
   - Positive elements indicate missing number
   - Elements marked twice indicate repeating number

4. Using Count Array:
   Time: O(n), Space: O(n)
   - Create frequency array
   - Count > 1 indicates repeating number
   - Count = 0 indicates missing number
*/

#include <bits/stdc++.h>
using namespace std;

void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
}

int main()
{
    int n = 0;
    cin >> n;
    vector<int> arr(n);
    input(arr);
    return 0;
}