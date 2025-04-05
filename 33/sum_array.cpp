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

int SumArray(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    // else if (n == 1)
    // {
    //     return arr[0];
    // }
    return arr[n - 1] + SumArray(arr, n - 1);
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
    cout << "Sum of all array elements is : " << SumArray(arr, n);
    return 0;
}