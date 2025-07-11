
/*
Title: 1431. Kids With the Greatest Number of Candies

Problem:
Given an array candies where candies[i] is the number of candies the ith kid has, and an integer extraCandies, return a boolean array result such that result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Input:
- candies: vector<int> of size n, where 2 <= n <= 100 and 1 <= candies[i] <= 100
- extraCandies: int, 1 <= extraCandies <= 50

Output:
- vector<bool> of size n, where each element indicates if the corresponding kid can have the greatest number of candies after receiving extraCandies.

Constraints:
- n == candies.length
- 2 <= n <= 100
- 1 <= candies[i] <= 100
- 1 <= extraCandies <= 50

Approach 1: Using std::max_element
1. Find the maximum number of candies among all kids using std::max_element. (O(n))
2. For each kid, check if candies[i] + extraCandies >= maximum candies. (O(n))
3. Store the result in a boolean vector and return.

Time Complexity: O(n)
Space Complexity: O(n)

Approach 2: Manual Maximum Calculation
1. Initialize maxi to INT_MIN.
2. Iterate through candies to find the maximum value. (O(n))
3. For each kid, check if candies[i] + extraCandies >= maxi.
4. Store true or false in the result vector accordingly.

Time Complexity: O(n)
Space Complexity: O(n)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int maxi = *max_element(candies.begin(), candies.end());
        vector<bool> ans;
        ans.reserve(candies.size());
        for (int candy : candies)
        {
            ans.push_back(candy + extraCandies >= maxi);
        }
        return ans;
    }
};

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> ans;
        int maxi = INT_MIN;
        for (int i = 0; i < candies.size(); i++)
        {
            maxi = max(candies[i], maxi);
        }
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= maxi)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};