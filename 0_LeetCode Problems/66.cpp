/**
 Title: Plus One

 Problem:
 Given a large integer represented as an array of its digits (most significant digit first), increment the integer by one and return the resulting array of digits.

 Input:
 - digits: vector<int> representing the digits of a non-negative integer, with no leading zeros.

 Output:
 - vector<int> representing the digits of the incremented integer.

 Constraints:
 - 1 <= digits.length <= 100
 - 0 <= digits[i] <= 9
 - digits does not contain any leading 0's.

 Approaches:
 1. In-place Iterative Approach:
    - Start from the least significant digit and add one.
    - Propagate carry if needed.
    - If carry remains after the most significant digit, insert 1 at the front.
    - Time Complexity: O(n)
    - Space Complexity: O(1) extra (if modifying in place), O(n) if returning a new array.

 2. Convert to Integer/String Approach:
    - Convert the digits array to an integer or string, increment, and convert back.
    - Not suitable for very large numbers due to overflow/precision limits.
    - Time Complexity: O(n)
    - Space Complexity: O(n)

 3. Using Stack:
    - Push digits to a stack, process addition and carry, then pop to result.
    - Time Complexity: O(n)
    - Space Complexity: O(n)
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int start = 0;

        while (start < digits.size() && digits[start] == 0)
            start++;
        if (start == digits.size())
            return {1};

        vector<int> ans;
        int carry = 1;
        for (int i = digits.size() - 1; i >= start; i--)
        {
            int sum = digits[i] + carry;
            carry = sum / 10;
            ans.push_back(sum % 10);
        }

        if (carry)
            ans.push_back(carry);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};