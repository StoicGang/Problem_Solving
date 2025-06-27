
/*
Title: Bubble Sort - Count the Number of Passes

Problem:
    Given an array of distinct positive integers, determine how many passes (iterations) the bubble sort algorithm will take to sort the array in non-decreasing order. Each pass is defined as a complete traversal of the array where adjacent elements are compared and swapped if necessary.

Input:
    - The first line contains an integer n (1 ≤ n ≤ 10^5), the number of elements in the array.
    - The second line contains n distinct positive integers (1 ≤ arr[i] ≤ 10^9), the elements of the array.

Output:
    - Print a single integer: the number of passes (iterations) required by the bubble sort algorithm to sort the array.

Constraints:
    - 1 ≤ n ≤ 10^5
    - 1 ≤ arr[i] ≤ 10^9
    - All elements are distinct.

Approach:
    1. Read the number of elements and the array.
    2. Implement the bubble sort algorithm:
        - Initialize a counter for the number of passes.
        - For each pass, traverse the array and swap adjacent elements if they are out of order.
        - If no swaps are made in a pass, the array is sorted and the process stops.
        - Increment the pass counter after each pass.
    3. Output the number of passes taken to sort the array.

Complexity Analysis:
    - Time Complexity: O(n^2) in the worst case (when the array is sorted in reverse order).
    - Space Complexity: O(1) additional space (excluding input array).

Note:
- The implementation uses an optimized bubble sort that stops early if the array becomes sorted before completing all possible passes.
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

int bubble_sort(vector<int> &arr)
{
    int count = 0;
    int n = arr.size();
    bool swapped = true;

    while (swapped)
    {
        swapped = false;
        count++;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
    }
    return count;
}

int main()
{
    int num;
    cin >> num;
    vector<int> arr(num);
    input(arr);
    cout << bubble_sort(arr);
    return 0;
}