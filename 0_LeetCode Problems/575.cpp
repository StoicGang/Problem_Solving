/*
Title: 575. Distribute Candies

Problem:
Alice has n candies, where the ith candy is of type candyType[i]. She is advised to eat only n / 2 candies (n is always even). Alice wants to maximize the number of different types of candies she eats, while following the doctor's advice.

Input:
- An integer array candyType of length n, where candyType[i] represents the type of the ith candy.

Output:
- An integer representing the maximum number of different types of candies Alice can eat if she only eats n / 2 of them.

Constraints:
- n == candyType.length
- 2 <= n <= 10^4
- n is even.
- -10^5 <= candyType[i] <= 10^5

Approaches:

1. Sorting and Counting Unique Types
    - Sort the array.
    - Count the number of unique types by comparing adjacent elements.
    - Return the minimum of unique types and n / 2.
    - Time Complexity: O(n log n) (due to sorting)
    - Space Complexity: O(1) (ignoring sort implementation details)

2. Using Unordered Map
    - Use an unordered_map to count occurrences of each candy type.
    - The number of unique types is the size of the map.
    - Return the minimum of unique types and n / 2.
    - Time Complexity: O(n)
    - Space Complexity: O(n)

3. Using Set
    - Insert all candy types into a set to get unique types.
    - Return the minimum of set size and n / 2.
    - Time Complexity: O(n log n) (set insertion)
    - Space Complexity: O(n)

4. Using Unordered Set
    - Insert all candy types into an unordered_set for unique types.
    - Return the minimum of unordered_set size and n / 2.
    - Time Complexity: O(n)
    - Space Complexity: O(n)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        sort(candyType.begin(), candyType.end());
        int n = candyType.size();
        int uniqueCount = 1;
        for (int i = 1; i < n; i++)
        {
            if (candyType[i - 1] != candyType[i])
            {
                uniqueCount++;
            }
        }
        return min(uniqueCount, n / 2);
    }
};

class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        int n = candyType.size();
        unordered_map<int, int> count;
        for (int i = 0; i < n; i++)
        {
            count[candyType[i]]++;
        }
        return (count.size() > n / 2) ? n / 2 : count.size();
    }
};

class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        int n = candyType.size();
        set<int> uniqueVal(candyType.begin(), candyType.end());
        return uniqueVal.size() > n / 2 ? n / 2 : uniqueVal.size();
    }
};

class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        int n = candyType.size();
        unordered_set<int> Uniq(candyType.begin(), candyType.end());
        return Uniq.size() > n / 2 ? n / 2 : Uniq.size();
    }
};