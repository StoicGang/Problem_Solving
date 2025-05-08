#include <bits/stdc++.h>

using namespace std;

int kthLargest(int n, vector<int> &arr, int k)
{
    vector<int> temp = arr;
    sort(temp.begin(), temp.end(), greater<int>());
    return temp[k - 1];
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int k = 0;
    cin >> k;

    cout << k << "th Largest : " << kthLargest(n, arr, k);
    return 0;
}