/*
Title: Partial Selection Sort (HackerEarth Problem)

Problem:
Given an array 'a' of size N and an integer x, perform x iterations of the selection sort algorithm:
- In each iteration i (from 1 to x), select the minimum element from the unsorted part (from i to N), and swap it with the element at position i.
Print the state of the array after x iterations.

Input:
- The first line contains two integers N and x: the size of the array and the number of selection sort steps to perform.
- The second line contains N space-separated integers: the elements of the array.

Output:
- Print N space-separated integers: the state of the array after x steps.

Constraints:
- 1 ≤ N ≤ 10^5
- 1 ≤ x ≤ N
- Array elements are integers (within the range of int).
- Time Limit: 2 seconds
- Memory Limit: 256 MB

Approaches:

1. Partial Selection Sort (Brute Force):
    - For each iteration i from 0 to x-1:
      - Find the minimum element in the subarray from i to N-1.
      - Swap it with the element at position i.
    - Stop after x iterations.
    - Time Complexity: O(x * N)
    - Space Complexity: O(1) (in-place).

2. Optimized Approach:
    - Since only x iterations are required, only the first x elements are guaranteed to be sorted.
    - No further optimization possible due to the nature of selection sort.
    - Time Complexity: O(x * N)
    - Space Complexity: O(1)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void sorting(vector<int> &arr, int x)
{
    int iteration = 0;
    for (int i = 0; i < arr.size() && iteration <= x; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
        iteration++;
    }
}

int main()
{
    int num, x;
    cin >> num >> x;
    vector<int> arr(num, 0);
    input(arr);
    sorting(arr, x);
    print(arr);
    return 0;
}