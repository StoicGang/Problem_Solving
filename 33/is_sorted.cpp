#include <bits/stdc++.h>
using namespace std;

void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool isSorted(int arr[], int size)
{
    if (size == 1 || size == 0)
    {
        return true;
    }
    else if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}

int main()
{
    int arr[10] = {0};
    int n;
    cout << "Enter n (n<11):";
    cin >> n;
    cout << "Enter array elements : " << endl;
    input(arr, n);
    Print(arr, n);
    cout << boolalpha << "Is sorted array : " << isSorted(arr, n);
    return 0;
}