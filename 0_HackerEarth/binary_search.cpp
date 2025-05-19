
/**
 Binary Search Implementation

 Problem:
 Search for a given key in a sorted array using binary search algorithm

 Input:
 - First line: N (size of array)
 - Second line: N space separated integers (array elements)
 - Third line: Q (number of queries)
 - Next Q lines: Each contains a key to search

 Output:
 - For each query, print:
   1 if key is found
   0 if key is not found

 Constraints:
 - 1 <= N <= 10^5
 - 1 <= Q <= 10^5
 - Array elements and queries are integers
 - Time limit: 0.5 seconds
 - Memory limit: 256 MB

 Approach:
 1. Take input array and sort it
    Time: O(nlogn)

 2. For each query:
    - Use binary search to find key
    - Binary search works by repeatedly dividing search interval in half
    Time: O(logn) per query

 3. Binary Search Steps:
    a. Initialize start = 0, end = size-1
    b. While start <= end:
       - Find mid = start + (end-start)/2
       - If key found at mid, return true
       - If key < mid element, search left half
       - If key > mid element, search right half
    c. Return false if key not found

 Overall Time Complexity: O(nlogn + QlogN)
 Space Complexity: O(n) for vector storage
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool binary_search(vector<int> &vec, int key)
{
    int start = 0, end = vec.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (vec[mid] == key)
        {
            return true;
        }
        else if (vec[mid] > key)
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
    sort(vec.begin(), vec.end());
    int TotalSearch = 0;
    cin >> TotalSearch;
    while (TotalSearch != 0)
    {
        int key = 0;
        cin >> key;
        if (binary_search(vec, key))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
        TotalSearch--;
    }
    return 0;
}