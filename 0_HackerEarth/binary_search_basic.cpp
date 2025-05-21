/*
Title: Binary Search with Lower and Upper Bounds
Problem: Find element presence and its bounds in a sorted array.

Input: Array size N, N integers, Q queries, Q integers for search

Output: For each query: YES/NO + lower_bound + upper_bound

Bounds Explanation:
- Lower Bound: Smallest element >= X in sorted array
    Formula: First occurrence of element >= X
- Upper Bound: Smallest element > X in sorted array
    Formula: First occurrence of element > X

Example:
Array: [1, 2, 2, 3, 3, 4]
For X = 2:
- Lower Bound = 2 (first 2)
- Upper Bound = 3 (first element > 2)

Constraints:
- 1 <= N <= 10^5
- -10^9 <= Array elements <= 10^9
- 1 <= Q <= 10^5
- -10^9 <= Query values <= 10^9

Approach:
1. Input array and sort it
    Time: O(N log N)

2. For each query:
    a. Binary search to find element
            Time: O(log N)
    b. Find lower bound (minimum element >= X)
            Time: O(log N)
    c. Find upper bound (minimum element > X)
            Time: O(log N)

Overall Time Complexity: O(N log N + Q log N)
Space Complexity: O(N)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lowerBound(vector<int> &vec, int key)
{
    int start = 0;
    int end = vec.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (vec[mid] >= key)
        {
            ans = vec[mid];
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int upperBound(vector<int> &vec, int key)
{
    int start = 0;
    int end = vec.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (vec[mid] > key)
        {
            ans = vec[mid];
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

bool binary_search(vector<int> &vec, int key)
{
    int start = 0;
    int end = vec.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (vec[mid] == key)
        {
            return true;
        }
        else if (key < vec[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
}

void input(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
}

int main()
{
    int num;
    cin >> num;
    vector<int> vec(num);
    input(vec);
    int totalSearch = 0;
    cin >> totalSearch;
    sort(vec.begin(), vec.end());

    int key = 0;
    while (totalSearch != 0)
    {
        int key = 0;
        cin >> key;
        if (binary_search(vec, key))
        {
            cout << "YES ";
            cout << lowerBound(vec, key) << " " << upperBound(vec, key) << endl;
        }
        else
        {
            cout << "NO ";
            cout << lowerBound(vec, key) << " " << upperBound(vec, key) << endl;
        }
        totalSearch--;
    }
}