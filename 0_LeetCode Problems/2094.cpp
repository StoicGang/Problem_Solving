/*
Title: 2094. Finding 3-Digit Even Numbers

Problem:
Given an integer array digits (may contain duplicates), find all unique 3-digit even numbers that can be formed by concatenating three elements from digits in any order, with no leading zeros.

Input:
- digits: vector<int> (3 <= digits.length <= 100, 0 <= digits[i] <= 9)

Output:
- vector<int>: Sorted array of unique 3-digit even numbers formed as described.

Constraints:
- Each number must use three digits from digits (each digit at most as many times as it appears).
- No leading zeros.
- The number must be even.

Approach 1: Brute Force Permutations
    1. Generate all 3-length permutations of digits.
    2. Form numbers, check for leading zero and evenness.
    3. Use a set to ensure uniqueness.
    - Time: O(n^3)
    - Space: O(1) (excluding output)

Approach 2: Frequency Counting (Implemented)
    1. Count occurrences of each digit.
    2. Iterate all 3-digit even numbers (100 to 998, step 2).
    3. For each, check if digits are available in count.
    4. Collect valid numbers.
    - Time: O(450) (since only 450 even numbers in range)
    - Space: O(1) (excluding output)

Both approaches guarantee correctness, but frequency counting is more efficient for large inputs.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findEvenNumbers(vector<int> &digits)
    {
        vector<int> count(10, 0);
        for (int d : digits)
            count[d]++;

        vector<int> result;
        for (int num = 100; num <= 998; num += 2)
        { // check only even numbers
            int hundreds = num / 100;
            int tens = (num / 10) % 10;
            int ones = num % 10;

            vector<int> temp = count;
            if (--temp[hundreds] >= 0 && --temp[tens] >= 0 && --temp[ones] >= 0)
            {
                result.push_back(num);
            }
        }
        return result;
    }
};