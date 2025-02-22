#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5]{4, 2, 5, 3, 6};
    cout << "Before Sorting ";
    printArray(arr, 5);
    sort(arr, arr + 5);
    cout << "After Sorting ";
    printArray(arr, 5);
}