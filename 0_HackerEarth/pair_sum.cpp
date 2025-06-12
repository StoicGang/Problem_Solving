/*
Title: Pair Sum Problem

Problem:
Given an integer array A and a number K, determine whether any two different elements of the array sum to K.
Two elements are considered different if they are at different positions in the array.
Print "YES" if such a pair exists, otherwise print "NO".

Input:
- The first line contains two integers N (size of array A) and K.
- The second line contains N space-separated integers, the elements of array A.

Output:
- Print "YES" if there exists a pair of different elements whose sum is K, otherwise print "NO".

Constraints:
- 2 <= N <= 10^5
- -10^9 <= A[i], K <= 10^9

Sample Input:
5 9
1 2 3 4 5

Sample Output:
YES

Approaches:

1. Brute Force (O(N^2)):
    - For each pair of indices (i, j), check if A[i] + A[j] == K.
    - Inefficient for large N.

2. Sorting + Two Pointers (O(N log N)):
    - Sort the array.
    - Use two pointers (left at start, right at end).
    - Move pointers based on sum comparison with K.
    - Efficient and used in this implementation.

3. Hash Set (O(N)):
    - Iterate through array, for each element check if (K - A[i]) exists in a hash set.
    - Insert A[i] into the set after checking.
    - Most efficient for unsorted arrays.

Space Complexity:
- Sorting + Two Pointers: O(1) extra space (excluding input storage).
- Hash Set: O(N) extra space.

This implementation uses the Sorting + Two Pointers approach for clarity and efficiency.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPresent(vector<int> &arr, int key)
{
    int right = arr.size() - 1;
    int left = 0;
    while (left < right)
    {
        int sum = arr[right] + arr[left];
        if (sum == key)
        {
            return true;
        }
        else if (sum > key)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return false;
}

int main()
{
    int size, key;
    cin >> size >> key;

    if (size <= 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    cout << (isPresent(arr, key) ? "YES" : "NO") << endl;

    return 0;
}