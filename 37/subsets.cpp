#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index >= nums.size())
    {
        if (output.size() > 0)
        {
            ans.push_back(output);
        }
        return;
    }

    // exclude
    solve(nums, output, index + 1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> output;
    int index = 0;
    vector<vector<int>> ans;
    solve(nums, output, index, ans);
    return ans;
}

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

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> vec = subsets(nums);
    printVectorOfVectors(vec);
    return 0;
}