#include <bits/stdc++.h>
using namespace std;

void printVectorOfVectors(const vector<vector<int>> &vec)
{
    for (const auto &innerVec : vec)
    {
        for (const auto &element : innerVec)
        {
            cout << element << " ";
        }
        cout << endl;
    }
}

void solve(vector<int> str, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= str.size())
    {
        ans.push_back(str);
        return;
    }
    for (int i = index; i < str.size(); i++)
    {
        swap(str[index], str[i]);
        solve(str, index + 1, ans);
        // backtracking (returning to original string)
        swap(str[index], str[i]);
    }
}

vector<vector<int>> permute(vector<int> &str)
{
    int index = 0;
    vector<vector<int>> ans;
    solve(str, index, ans);
    return ans;
}

int main()
{
    vector<int> str = {1, 2, 3};
    vector<vector<int>> output = permute(str);
    printVectorOfVectors(output);
}