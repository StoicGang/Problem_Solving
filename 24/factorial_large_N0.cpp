#include <bits/stdc++.h>
using namespace std;

vector<int> facto(int n)
{
    vector<int> ans;
    ans.push_back(1);
    int carry = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int sum = (ans[j] * i) + carry;
            ans[j] = sum % 10;
            carry = sum / 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n;
    cout << "Enter N :";
    cin >> n;
    vector<int> results = facto(n);
    for (int i = 0; i < results.size(); i++)
    {
        cout << results[i];
    }
    return 0;
}