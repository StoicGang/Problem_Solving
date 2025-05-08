#include <bits/stdc++.h>
using namespace std;

void input(vector<int> &arr, int n)
{
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int duplicate_sort_method(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return arr[i];
        }
    }
    return -1;
}

int duplicate_marking(vector<int> &arr, int n)
{
    int ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);

        if (arr[index] < 0)
        {
            ans = index;
            break;
        }
        // mark as negative
        arr[index] *= -1;
    }
    return ans;
}

int duplicate_positioning(vector<int> &arr, int n)
{
    while (arr[0] != arr[arr[0]])
    {
        swap(arr[0], arr[arr[0]]);
    }
    return arr[0];
}

int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    // array elements should be n-1 (where n is size of array)
    cout << "Enter the array elements from 1-n ";
    input(arr, n);
    // cout << duplicate_sort_method(arr, n);
    // cout << duplicate_marking(arr, n);
    cout << duplicate_positioning(arr, n);
}