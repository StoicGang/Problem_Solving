/*
Title: Find Valid Pairs
Problem:
    Given an array of integers, find pairs of indices (i,j) that satisfy:
    - arr[i] - arr[j] = i - j
    - i ≠ j

Input:
    - First line contains an integer N (size of array)
    - Second line contains N space-separated integers (array elements)

Output:
    - Single integer representing count of valid pairs

Constraints:
    - 1 ≤ N ≤ 10^5
    - -10^9 ≤ arr[i] ≤ 10^9
    - All array elements are within range

Approaches:
1. Brute Force (Current Implementation)
    - Check every possible pair (i,j) where i ≠ j
    - For each pair, verify if arr[i] - arr[j] = i - j
    Time Complexity: O(n²)
    Space Complexity: O(1)

2. Optimized Approach (Potential Improvement)
    - Rearrange equation: arr[i] - i = arr[j] - j
    - Use hash map to store arr[i] - i values
    - Count frequencies and calculate pairs
    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

int countPairs(vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i != j && (arr[i] - arr[j] == i - j))
            {
                count++;
            }
        }
    }
    return count;
}
void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    input(arr);
    cout << countPairs(arr);
}