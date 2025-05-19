#include <bits/stdc++.h>
using namespace std;

vector<int> addOneToNumber(vector<int> arr)
{
    // Remove leading zeros
    int start = 0;
    while (start < arr.size() && arr[start] == 0)
        start++;
    if (start == arr.size())
        return {1}; // If all zeros, return {1}

    vector<int> ans;
    int carry = 1;
    for (int i = arr.size() - 1; i >= start; i--)
    {
        int sum = arr[i] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
    }

    if (carry)
        ans.push_back(carry);
    // reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 9};
    vector<int> result = addOneToNumber(arr);

    cout << "Result: ";
    for (int i = result.size() - 1; i >= 0; i--)
    {
        cout << result[i];
    }
    cout << endl;

    return 0;
}