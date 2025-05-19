#include <bits/stdc++.h>
using namespace std;

// vector<int> facto(int n)
// {
//     vector<int> ans;
//     ans.push_back(1);
//     int carry = 0;
//     for (int i = 2; i <= n; i++)
//     {
//         for (int j = 0; j < ans.size(); j++)
//         {
//             int sum = (ans[j] * i) + carry;
//             ans[j] = sum % 10;
//             carry = sum / 10;
//         }
//         while (carry)
//         {
//             ans.push_back(carry % 10);
//             carry /= 10;
//         }
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }

vector<int> facto(int n)
{
    vector<int> ans;
    ans.push_back(1);

    for (int i = 2; i <= n; i++)
    {
        int carry = 0;
        // Process from most significant digit to least significant
        for (int j = ans.size() - 1; j >= 0; j--)
        {
            int sum = (ans[j] * i) + carry;
            ans[j] = sum % 10;
            carry = sum / 10;
        }
        // Add new digits at the beginning
        while (carry)
        {
            ans.insert(ans.begin(), carry % 10);
            carry /= 10;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number to calculate factorial: ";
    cin >> n;

    vector<int> result = facto(n);

    cout << n << "! = ";
    for (int digit : result)
    {
        cout << digit;
    }
    cout << endl;

    return 0;
}