/*
Problem: Generate all possible permutations of a given string
Input: String 'S' which may contain duplicate characters
Output: Vector of all possible permutations
Note: Order of permutations in output doesn't matter
*/
#include <bits/stdc++.h>
using namespace std;

void solve(string &s, int index, vector<string> &ans)
{
    if (index >= s.length())
    {
        ans.push_back(s);
        return;
    }
    for (int i = index; i < s.length(); i++)
    {
        swap(s[index], s[i]);
        solve(s, index + 1, ans);
        // backtracking
        swap(s[index], s[i]);
    }
}

vector<string> findPermutations(string &s)
{
    vector<string> ans;
    int index = 0;
    solve(s, index, ans);
    return ans;
}