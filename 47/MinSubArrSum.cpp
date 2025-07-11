#include <bits/stdc++.h>

int minSubarraySum(int arr[], int n, int k)
{
    if (n < k)
    {
        return -1;
    }
    int current_sum = 0;
    for (int i = 0; i < k; i++)
    {
        current_sum += arr[i];
    }

    if (n == k)
    {
        return current_sum;
    }

    int current_min = INT_MAX, global_min = INT_MAX;

    for (int i = 1; i <= n - k; i++)
    {
        current_sum = current_sum + arr[i + k - 1] - arr[i - 1];
        current_min = min(current_min, current_sum);
        global_min = min(current_min, global_min);
    }
    return global_min;
}