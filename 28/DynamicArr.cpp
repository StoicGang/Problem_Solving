#include <bits/stdc++.h>

using namespace std;

int getsum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n = 0;
    cin >> n;
    // variable size
    int *arr = new int[n];
    // input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum is " << getsum(arr, n);
    delete[] arr;
    return 0;
}