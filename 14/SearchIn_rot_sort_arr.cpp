#include <iostream>

using namespace std;

int get_pivot(int arr[], int x)
{
    int start = 0, end = x;
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

int binary_search(int arr[], int s, int e, int key)
{
    int start = s, end = e, ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int pivotIndex(int arr[], int n, int key)
{
    int pivot = get_pivot(arr, n);
    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        return binary_search(arr, pivot, n - 1, key);
    }
    else
    {
        return binary_search(arr, 0, pivot - 1, key);
    }
}

int main()
{
    int arr[8]{7, 8, 1, 2, 3, 4, 5, 6};
    cout << "pivot " << pivotIndex(arr, 8, 6);
    return 0;
}