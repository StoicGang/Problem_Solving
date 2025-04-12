#include <bits/stdc++.h>
using namespace std;

void input(vector<int> &arr)
{
    arr.push_back(16);
    arr.push_back(54);
    arr.push_back(37);
    arr.push_back(98);
    arr.push_back(76);
}

void print(vector<int> &arr)
{
    cout << "Your array is : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(vector<int> &arr, int s, int mid, int e)
{
    int i = s, j = mid + 1;
    while (i <= mid && j <= e)
    {
        if (arr[i] <= arr[j])
        {
            i++;
        }
        else
        {
            int k = j;
            int value = arr[j];
            while (k > i)
            {
                arr[k] = arr[k - 1];
                k--;
            }
            arr[i] = value;
            i++;
            mid++;
            j++;
        }
    }
}

vector<int> merge_sort(vector<int> &arr)
{
    int n = arr.size();

    for (int size = 1; size < n; size *= 2)
    {
        for (int start = 0; start < n - 1; start += 2 * size)
        {
            int mid = start + size - 1;
            int end = min(start + 2 * size - 1, n - 1);

            // Merge subarrays [start..mid] and [mid+1..end]
            merge(arr, start, mid, end);
        }
    }
    return arr; // Return sorted array
}

int main()
{
    vector<int> arr;
    input(arr);
    print(arr);
    merge_sort(arr);
    cout << "\nAfter sorting " << endl;
    print(arr);
    return 0;
}