#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

/*
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
*/
int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int start = s + 1;
    int end = e;

    while (start <= end)
    {
        // Increment start while elements are smaller than or equal to pivot
        while (start <= e && arr[start] <= pivot)
        {
            start++;
        }
        // Decrement end while elements are greater than pivot
        while (end >= s && arr[end] > pivot)
        {
            end--;
        }
        // Swap elements when pointers have not crossed
        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
    }
    // Place the pivot in its correct position
    swap(arr[s], arr[end]);
    return end; // Return the pivot's final position
}

void quick_sort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int p = partition(arr, s, e);
    quick_sort(arr, s, p - 1);
    quick_sort(arr, p + 1, e);
}

int main()
{
    int arr[5] = {32, 5, 36, 1, 7};
    print(arr, 5);
    cout << "\nAfter sorting :";
    quick_sort(arr, 0, 4);
    print(arr, 5);
    return 0;
}