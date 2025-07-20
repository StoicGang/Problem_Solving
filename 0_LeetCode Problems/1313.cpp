/*
Title: 1313. Decompress Run-Length Encoded List
Problem:
    Given an encoded list of integers where each pair [freq, val] represents
    `freq` instances of `val`, decompress the list into a fully expanded vector.

Input:
    - A vector `nums` of even length (size = 2 * k), where each adjacent pair
      forms [freq, val] = [nums[2*i], nums[2*i+1]] for i >= 0
    - Constraints:
        • 2 <= nums.length <= 100
        • nums.length % 2 == 0
        • 1 <= nums[i] <= 100

Output:
    - A vector containing the decompressed list with each `val` repeated `freq` times,
      maintaining original pair order

Example:
    Input:  [1,2,3,4]
    Output: [2,4,4,4]
    Explanation: Pairs → [1,2] → [2]; [3,4] → [4,4,4]

Approach 1 : Brute Force with manual expansion
    - Loop through nums in steps of 2
    - For each pair [freq, val], add `freq` instances of `val` to result
    - Time Complexity : O(N), where N is sum of all frequencies
    - Space Complexity: O(N) for storing result

Approach 2 : STL-based using insert()
    - Use `result.insert(result.end(), freq, val)` to add chunks efficiently
    - Clean, readable, uses STL optimizations
    - Time Complexity : O(N)
    - Space Complexity: O(N)

Approach 3 : Alternative streaming version (for large input sources)
    - Read input in chunks and process each [freq,val] lazily
    - Useful for memory-constrained environments or when nums is streamed

*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> result;

        for (int i = 0; i < nums.size(); i += 2)
        {
            int freq = nums[i];
            int val = nums[i + 1];

            // Append 'val' 'freq' times
            result.insert(result.end(), freq, val);
        }

        return result;
    }
};