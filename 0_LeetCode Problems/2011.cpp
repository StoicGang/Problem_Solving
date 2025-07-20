
/*
Title: 2011. Final Value of Variable After Performing Operations

Problem:
Given an array of strings representing operations on a variable X, where:
- "++X" and "X++" increment X by 1,
- "--X" and "X--" decrement X by 1,
and X is initially 0, return the final value of X after performing all operations.

Input:
- operations: vector<string> containing the operations to be performed.
    Constraints:
        - 1 <= operations.length <= 100
        - operations[i] ∈ {"++X", "X++", "--X", "X--"}

Output:
- Integer representing the final value of X after all operations.

Constraints:
- The number of operations is between 1 and 100.
- Each operation is guaranteed to be one of the four valid strings.

Approach 1: Direct Comparison
    1. Initialize ans = 0.
    2. Iterate through each operation in the array.
    3. If the operation is "--X" or "X--", decrement ans.
    4. If the operation is "++X" or "X++", increment ans.
    5. Return ans.
    - Time Complexity: O(n), where n is the number of operations.
    - Space Complexity: O(1), only a single integer is used.

Approach 2: String Search
    1. Initialize ans = 0.
    2. For each operation, check if it contains '+'.
         - If yes, increment ans.
         - If no, decrement ans.
    3. Return ans.
    - Time Complexity: O(n * m), where n is the number of operations and m is the length of each string (but m is constant, so effectively O(n)).
    - Space Complexity: O(1).

*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int ans = 0;
        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "--X")
            {
                --ans;
            }
            else if (operations[i] == "X--")
            {
                ans--;
            }
            else if (operations[i] == "++X")
            {
            }
            else
            {
                ans++;
            }
        }
        return ans;
    }
};
class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int ans = 0;
        for (const string &op : operations)
        {
            if (op.find('+') != string::npos)
                ans++;
            else
                ans--;
        }
        return ans;
    }
};