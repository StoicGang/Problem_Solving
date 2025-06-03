#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &arr)
{
    int n = arr.size();
    if (n == 0)
        return -1;
    if (arr[0] <= arr[n - 1])
        return 0;

    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int findPairSum(vector<int> arr, int target)
{
    int n = arr.size();
    if (n < 2)
        return 0;

    int pivot = findPivot(arr);
    int left = pivot;
    int right = (pivot - 1 + n) % n;

    while (left != right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return 1;
        }
        else if (sum < target)
        {
            left = (left + 1) % n;
        }
        else
        {
            right = (right - 1 + n) % n;
        }
    }
}
int main()
{
    vector<int> arr = {11, 15, 6, 8, 9, 10}; // rotated sorted array
    int target = 16;                         // sum to find

    if (findPairSum(arr, target))
    {
        cout << "Pair with sum " << target << " exists" << endl;
    }
    else
    {
        cout << "Pair with sum " << target << " does not exist" << endl;
    }

    return 0;
}
