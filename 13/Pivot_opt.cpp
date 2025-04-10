#include <iostream>
using namespace std;

// here for this question the pivot element is the element whose leftsum == rightsum
// but pivot element is the element where the actual rotation happens in rotated sorted array
int findpivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int rightsum = 0, leftsum = 0;
    for (int i = 0; i < n; i++)
    {
        rightsum = rightsum + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        rightsum -= arr[i];
        if (rightsum == leftsum)
        {
            return i;
        }
        leftsum += arr[i];
    }
    return -1;
}

// Recursive call
int isPivot(int arr[], int n, int index, int leftsum, int rightsum)
{
    if (index == n)
    {
        return -1;
    }
    rightsum -= arr[index];
    if (leftsum == rightsum)
    {
        return index;
    }

    leftsum += arr[index];

    return isPivot(arr, n, index + 1, leftsum, rightsum);
}
int RfindPivot(int arr[], int n)
{
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
    }
    return isPivot(arr, n, 0, 0, totalsum);
}

int main()
{
    int arr[6]{1, 7, 3, 6, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "pivot element is at index: " << RfindPivot(arr, n) << endl;
    return 0;
}