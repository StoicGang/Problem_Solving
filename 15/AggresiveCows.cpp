#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int CowCount = 1;
    int lastPos = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            CowCount++;
            if (CowCount == m)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
}

int aggresiveCows(int arr[], int n, int m)
{
    std::sort(arr, arr + n);
    int s = 0, maxNum = -1, ans = -1;
    for (int i = 0; i < n; i++)
    {
        maxNum = max(maxNum, arr[i]);
    }
    int e = maxNum;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[5]{4, 2, 1, 3, 6};
    cout << aggresiveCows(arr, 5, 2);
    return 0;
}