/*
Problem:
    Find common elements in three sorted arrays.
    - Arrays are sorted in non-decreasing order
    - Output should maintain same ordering as input arrays
    - Duplicates should be included only once in output
    - Return empty array if no common elements found

Input:
    - Three vectors a, b, c containing integers
    - Vectors are sorted in non-decreasing order
    - Sizes can be different for each vector
    Example:
    a = [1, 4, 5, 6, 8]
    b = [2, 4, 7, 9]
    c = [1, 2, 4]

Output:
    - Vector containing common elements in same order as input
    - No duplicates in output
    Example: [4]

Approaches:
    1. Three Pointer Approach (Current Implementation)
       - Use three pointers i, j, k for arrays a, b, c respectively
       - Compare elements and increment pointers based on comparison
       - Time Complexity: O(n + m + k) where n, m, k are lengths of arrays
       - Space Complexity: O(min(n, m, k)) for result array

    2. Two Pointer with Array Size Optimization (Implemented)
       - Sort arrays by size ascending order
       - Find intersection of smallest arrays first
       - Then find intersection with largest array
       - Time Complexity: O(n + m + k)
       - Space Complexity: O(min(n,m)) for intermediate result

    3. Hash Set Approach (Alternative)
       - Create hash set from smallest array
       - Find intersection with second array
       - Find intersection with third array
       - Time Complexity: O(n + m + k)
       - Space Complexity: O(n) where n is length of smallest array
*/
#include <bits/stdc++.h>
using namespace std;

// vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c)
// {
//     vector<int> result;
//     int i = 0, j = 0, k = 0;

//     while (i < a.size() && j < b.size() && k < c.size())
//     {
//         if (a[i] == b[j] && b[j] == c[k])
//         {
//             // Avoid duplicates in the result
//             if (result.empty() || result.back() != a[i])
//             {
//                 result.push_back(a[i]);
//             }
//             i++;
//             j++;
//             k++;
//         }
//         else if (a[i] < b[j])
//             i++;
//         else if (b[j] < c[k])
//             j++;
//         else
//             k++;
//     }

//     return result;
// }

// Helper function to find intersection of two sorted vectors with unique results
vector<int> intersect(const vector<int> &a, const vector<int> &b)
{
    int i = 0, j = 0;
    vector<int> result;

    while (i < a.size() && j < b.size())
    {
        if (a[i] == b[j])
        {
            if (result.empty() || result.back() != a[i])
            {
                result.push_back(a[i]);
            }
            ++i;
            ++j;
        }
        else if (a[i] < b[j])
        {
            ++i;
        }
        else
        {
            ++j;
        }
    }

    return result;
}

vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c)
{
    // Determine order of arrays by size

    if (b.size() < a.size())
        swap(a, b);
    if (c.size() < a.size())
        swap(a, c);
    if (c.size() < b.size())
        swap(b, c);

    vector<int> firstIntersection = intersect(a, b);
    vector<int> finalResult = intersect(firstIntersection, c);

    return finalResult;
}

void print(vector<int> &temp)
{
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> a{1, 4, 5, 6, 8};
    vector<int> b{2, 4, 7, 9};
    vector<int> c{1, 2, 4};
    vector<int> result = findCommonElements(a, b, c);
    print(result);
    return 0;
}