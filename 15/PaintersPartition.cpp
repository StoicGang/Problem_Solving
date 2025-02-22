#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int painterCount = 1;
    int TotalTime = 0;
    for (int i = 0; i < n; i++)
    {
        if (TotalTime + arr[i] <= mid)
        {
            TotalTime += arr[i];
        }
        else
        {
            painterCount++;
            if (painterCount > m || arr[i] > mid)
            {
                return false;
            }
            TotalTime = arr[i];
        }
    }
    return true;
}

int PainterPartition(int arr[], int n, int m)
{
    int s = 0, ans = -1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[6]{50, 15, 50, 50, 67};
    cout << PainterPartition(arr, 6, 2);
    return 0;
}