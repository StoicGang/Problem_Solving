#include <bits/stdc++.h>
using namespace std;

void solve(string digits, string output, int index, vector<string> &ans, string mapping[])
{
    // base condition
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';

    if (mapping[number].empty()) // Skip empty mappings
    {
        solve(digits, output, index + 1, ans, mapping);
        return;
    }

    string value = mapping[number];
    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mapping);
        output.pop_back();
    }
}

vector<string> phone_number(string digits)
{
    vector<string> ans;
    if (digits.length() < 1)
    {
        return ans;
    }
    string output = "";
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
}

void printV(vector<string> &vec)
{
    for (const auto &element : vec)
    {
        cout << element << " ";
    }
}

int main()
{
    string digit;
    cout << "Enter the digit: ";
    cin >> digit;
    vector<string> ans = phone_number(digit);
    printV(ans);
    return 0;
}