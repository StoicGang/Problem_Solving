#include <bits/stdc++.h>
using namespace std;

void solve(string str, string output, int index, vector<string> &ans)
{
    // base case
    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }

    // exclude
    solve(str, output, index + 1, ans);

    // include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}

vector<string> subsequence(string str)
{
    string output = "";
    int index = 0;
    vector<string> ans;
    solve(str, output, index, ans);
    return ans;
}

void printVectorOfstrings(const vector<string> &vec)
{
    for (const auto &innerVec : vec)
    {
        for (const auto &element : innerVec)
        {
            cout << element;
        }
        cout << " ";
    }
}

int main()
{
    string str{"abc"};
    vector<string> output = subsequence(str);
    printVectorOfstrings(output);
    return 0;
}