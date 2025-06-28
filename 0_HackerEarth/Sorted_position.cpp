/*
Title:
Find Sorted Positions of Array Elements

Problem:
Given an array A of N unique integers, for each element at position i, determine the position it would occupy if the array were sorted in ascending order. Output these positions for all elements in the original order.

Input:
- The first line contains a single integer N, the size of the array A.
- The second line contains N space-separated unique integers, the elements of array A.

Output:
- Print N space-separated integers on a single line. The ith integer denotes the position (1-based) of A[i] if the array were sorted.

Constraints:
- 1 <= N <= 10^5
- All elements in A are unique.
- 1 <= A[i] <= 10^9

Sample Input:
5
1 2 3 4 5

Sample Output:
1 2 3 4 5

Time Limit: 5 seconds
Memory Limit: 256 MB

Approach 1: Brute Force (Inefficient)
    1. For each element, count how many elements are less than it.
    2. Assign position as count + 1.
    3. Time Complexity: O(N^2)
    4. Space Complexity: O(1)

Approach 2: Sorting and Mapping (Efficient)
    1. Copy the original array to a new array.
    2. Sort the new array.
    3. Map each element to its 1-based position in the sorted array using a hash map.
    4. For each element in the original array, output its mapped position.
    5. Time Complexity: O(N log N) (due to sorting)
    6. Space Complexity: O(N) (for the map and copy of the array)
*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n), sorted(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sorted[i] = arr[i];
    }

    sort(sorted.begin(), sorted.end());
    unordered_map<int, int> pos;
    for (int i = 0; i < n; i++)
    {
        pos[sorted[i]] = i + 1; // 1-based position
    }

    for (int i = 0; i < n; i++)
    {
        cout << pos[arr[i]] << " ";
    }

    return 0;
}
