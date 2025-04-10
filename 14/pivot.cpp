#include <bits/stdc++.h>
using namespace std;

// only for the rotated search array

int pivot(int arr[], int n)
{

    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int RPivot(int arr[], int s, int e)
{
    // this will fail in case on sorted array

    if (s > e)
    {
        return -1;
    }
    if (s == e)
    {
        return s;
    }

    int mid = s + (e - s) / 2;
    if (arr[mid] >= arr[0])
    {
        return RPivot(arr, mid + 1, e);
    }
    else
    {
        return RPivot(arr, s, mid);
    }
}

int main()
{
    int arr[8]{7, 9, 9, 0, 1, 2, 3, 4};
    cout << "Pivot element in rotated array is at : " << RPivot(arr, 0, 7);
}