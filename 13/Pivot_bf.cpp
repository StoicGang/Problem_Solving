#include <iostream>
using namespace std;

// The pivot index is the index where the sum of all the numbers strictly
// to the left of the index is equal to the sum of all the numbers strictly to the index's right.

int leftsum(int arr[], int n)
{
    int sum = 0;
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < mid)
    {
        sum = sum + arr[start];
        start++;
    }
    return sum;
}

int rightsum(int arr[], int n)
{
    int sum = 0;
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int i = mid + 1;
    while (i <= end)
    {
        sum = sum + arr[i];
        i++;
    }
    return sum;
}

int findpivot(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int leftsum = 0, rightsum = 0;
        for (int j = 0; j < i; j++)
        {
            leftsum += arr[j];
        }
        for (int j = i + 1; j < n; j++)
        {
            rightsum += arr[j];
        }
        if (leftsum == rightsum)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5]{1, 3, 5, 3, 1};
    cout << "Leftsum : " << leftsum(arr, 5) << endl;
    cout << "Rightsum : " << rightsum(arr, 5) << endl;
    int result = findpivot(arr, 5);
    cout << "pivot element is at index " << result;
}