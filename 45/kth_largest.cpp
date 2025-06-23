#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

void kthSmallestLargest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    cout << arr[k - 1] <<" "<< arr[n - k] << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        t--;
    }
    return 0;
}