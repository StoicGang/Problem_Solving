/*
Title: 1089 Duplicate Zeros

Problem:
- Given a fixed-length integer array, duplicate each occurrence of zero.
- Shift remaining elements to the right.
- Modify the input array in-place and do not return anything.
- Elements beyond the original length are discarded.

Input:
- Integer array 'arr' of length n
- Example: [1,0,2,3,0,4,5,0]

Output:
- Modified input array with zeros duplicated in place
- Example: [1,0,0,2,3,0,0,4]

Constraints:
- 1 <= arr.length <= 10^4
- 0 <= arr[i] <= 9

Approaches:
1. Two-Pointer Method (Optimal)
   - Count total zeros to be duplicated
   - Traverse from end and shift elements backward
   - Handle edge cases when duplicated zeros exceed array bounds
   Time: O(n)
   Space: O(1)

2. Auxiliary Array (Simpler but not optimal)
   - Build a new array with duplicated zeros
   - Truncate to original length and copy back
   Time: O(n)
   Space: O(n)

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void duplicateZeros(vector<int> &arr)
    {
        int zeros = 0;
        int n = arr.size();

        // Count the number of zeros to be duplicated
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == 0)
                zeros++;
        }

        int i = n - 1;
        int j = n + zeros - 1;

        // Traverse backwards and modify the array in-place
        while (i < j)
        {
            if (j < n)
            {
                arr[j] = arr[i];
            }
            if (arr[i] == 0)
            {
                j--;
                if (j < n)
                {
                    arr[j] = 0;
                }
            }
            i--;
            j--;
        }
    }
};
