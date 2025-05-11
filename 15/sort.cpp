/*
Title: Array Sorting using STL sort
Problem: Implement sorting of an array using C++ STL sort function and demonstrate its usage.

Input:
- Fixed array of integers
- Array size (in this case, 5)

Output:
- Array elements before sorting
- Array elements after sorting

Constraints:
- Array size is fixed at compile time
- Elements are integers
- Memory constraints: O(1) extra space

Approaches:
1. Using STL sort (Current Implementation):
   - Uses IntroSort (hybrid of QuickSort, HeapSort, and InsertionSort)
   - Time: O(n log n)
   - Space: O(log n) due to recursion stack

2. Alternative Approaches:
   a. Bubble Sort:
      - Time: O(n²)
      - Space: O(1)
   b. Selection Sort:
      - Time: O(n²)
      - Space: O(1)
   c. Merge Sort:
      - Time: O(n log n)
      - Space: O(n)

Example:
Input: [4, 2, 5, 3, 6]
Output:
Before: 4 2 5 3 6
After:  2 3 4 5 6
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5]{4, 2, 5, 3, 6};
    cout << "Before Sorting ";
    printArray(arr, 5);
    sort(arr, arr + 5);
    cout << "After Sorting ";
    printArray(arr, 5);
}