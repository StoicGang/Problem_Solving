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

int main()
{
    int arr[10]{8, 9, 0, 1, 2, 3, 4, 5, 6, 7};
    cout << "Pivot element in rotated sorted array : " << get_pivot(arr, 10);
    return 0;
}