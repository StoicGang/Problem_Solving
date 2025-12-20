#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> binaryconversion(int n)
{

    vector<int> ans;
    int i = n;
    if (n == 0)
        ans.push_back(0);

    else
    {
        while (i > 0)
        {
            int remainder = i & 1;
            i = i >> 1;
            ans.push_back(remainder);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

vector<int> binaryconvNeg(int n)
{
    vector<int> ans;

    for (int i = 0; i < 32; i++)
    {
        int remainder = n & 1;
        n = n >> 1;
        ans.push_back(remainder);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

vector<int> universal(int n)
{
    vector<int> ans;

    for (int i = 31; i >= 0; i--)
    {
        ans.push_back((n >> i) & 1);
    }
    return ans;
}

string universals(int n)
{
    string ans;

    for (int i = 31; i >= 0; i--)
    {
        ans.push_back('0' + ((n >> i) & 1));
    }
    return ans;
}

int main()
{
    int n{0};
    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    int result = 0;
    int position = 1;

    while (n != 0)
    {
        int bit = n & 1;
        result += bit * position;
        position *= 10;
        n = n >> 1;
    }

    cout << "Converted binary form is: " << result << endl;
    return 0;
}