#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubble_sort(arr, n - 1);
}

int main()
{
    int arr[8] = {53, 61, 7, 32, 64, 23, 74, 90};
    bubble_sort(arr, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}