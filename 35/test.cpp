
#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(vector<int> &arr, int s, int mid, int e)
{
    // finding the length
    int len1 = mid - s + 1;
    int len2 = e - mid;
    // partition vectors
    vector<int> right(len2);
    vector<int> left(len1);
    // copy the values
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k++];
    }
    // merge two sorted array
    k = s;
    int index1 = 0, index2 = 0;
    while (index1 < len1 && index2 < len2)
    {
        if (right[index2] >= left[index1])
        {
            arr[k++] = left[index1++];
        }
        else
        {
            arr[k++] = right[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[k++] = left[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = right[index2++];
    }
}

void merge_sort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    merge_sort(arr, s, mid);
    merge_sort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}

int main()
{
    vector<int> arr{23, 4, 10, 57, 94, 2, 35, 78};
    printvector(arr);
    merge_sort(arr, 0, arr.size() - 1);
    printvector(arr);
}