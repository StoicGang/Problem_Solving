#include <bits/stdc++.h>

using namespace std;

int secondLargest(int n, vector<int> &arr)
{
    // Normal Approach
    // int second = INT_MIN;
    // sort(arr.begin(), arr.end());
    // int largest = arr[n - 1];
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     if (arr[i] != largest)
    //     {
    //         second = arr[i];
    //         break;
    //     }
    //     else if (arr[i] == largest && i == 0)
    //     {
    //         second = -1;
    //     }
    // }
    // return second;

    // Better approach
    // int largest = arr[0];
    // int second = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > largest)
    //     {
    //         largest = arr[i];
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > second && arr[i] < largest)
    //     {
    //         second = arr[i];
    //     }
    // }
    // return second;

    // Optimal solution
    int largest = arr[0];
    int second = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second)
        {
            second = arr[i];
        }
    }
    return second;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    int n = arr.size();
    cout << "Second Largest : " << secondLargest(n, arr);
}