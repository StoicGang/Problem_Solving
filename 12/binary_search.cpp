/*
Title: Binary Search Implementation
Problem:
    Implement binary search to find an element in a sorted array using both
    iterative and recursive approaches.

Input:
    - Sorted integer array
    - Array size
    - Key element to search for

Output:
    - Index of the key if found
    - -1 if key not found

Constraints:
    - Array must be sorted in ascending order
    - Valid array indices (0 to size-1)
    - Array size > 0

Approaches:
1. Iterative Binary Search:
    - Initialize start and end pointers
    - While start <= end:
        * Calculate mid = start + (end-start)/2
        * If arr[mid] == key, return mid
        * If arr[mid] > key, search left half (end = mid-1)
        * If arr[mid] < key, search right half (start = mid+1)
    Time: O(log n), Space: O(1)

2. Recursive Binary Search (RBinary):
    - Base case: start > end, return -1
    - Calculate mid point
    - If arr[mid] == key, return mid
    - Recur on appropriate half
    Time: O(log n), Space: O(log n) due to recursion stack

Example:
Input: arr = [1,3,4,6,8,9], key = 6
Output: 3 (index where 6 is found)
*/

// Binary search is like quickly flipping through a sorted book
// to find a word by halving the pages until you pinpoint it.

#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int left{0};
    int right{n - 1};
    int mid = left + (right - left) / 2;

    while (left <= right)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        // right side chala ja bhai
        if (arr[mid] < key)
        {
            left = mid + 1;
        }
        // left side chala ja bhai
        else
        {
            right = mid - 1;
        }
        mid = left + (right - left) / 2;
    }
    return -1;
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int inputs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int RBinary(int arr[], int start, int end, int key)
{
    if (start > end)
    {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (arr[mid] > key)
    {
        RBinary(arr, start, mid - 1, key);
    }

    return RBinary(arr, mid + 1, end, key);
}

int main()
{
    int arr[200]{};
    int size{0};
    int key{0};
    cout << "Enter the size : ";
    cin >> size;
    cout << "Enter array elements :";
    inputs(arr, size);
    cout << "Array : ";
    printarray(arr, size);

    cout << "Enter the element you want to search : ";
    cin >> key;
    // cout << binary_search(arr, size, key);
    cout << "Element is present at : " << RBinary(arr, 0, size - 1, key);
    return 0;
}