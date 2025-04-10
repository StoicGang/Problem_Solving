// Finding the pivot is like spotting the point in a circle where the line breaks and starts over again
#include <iostream>
using namespace std;

int get_pivot(int arr[], int n)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int RPivot(int arr[], int start, int end)
{
    if (start > end)
    {
        return -1;
    }
    if (start == end)
    {
        return start;
    }
    int mid = start + (end - start) / 2;

    if (mid < end && arr[mid] > arr[mid + 1])
    {
        return mid + 1;
    }
    if (mid > start && arr[mid] < arr[mid - 1])
    {
        return mid;
    }
    if (arr[mid] >= arr[0])
    {
        RPivot(arr, mid + 1, end);
    }
    return RPivot(arr, start, mid);
}

int main()
{
    int arr[6]{8, 9, 0, 1, 2, 3};
    // cout << "Pivot element in rotated sorted array : " << get_pivot(arr, 10);
    cout << "Pivot element in rotated sorted array : " << RPivot(arr, 0, 6);
    return 0;
}