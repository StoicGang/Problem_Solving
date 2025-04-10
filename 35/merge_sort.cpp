#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void input(vector<int> &arr)
{
    arr.push_back(16);
    arr.push_back(54);
    arr.push_back(37);
    arr.push_back(98);
    arr.push_back(76);
}

void merge(vector<int> &arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // partition vectors
    vector<int> first(len1);
    vector<int> second(len2);

    // copy values into the vectors
    int k = s; // k is main array index
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    //  merge two sorted partitioned arrays
    int index1 = 0;
    int index2 = 0;
    k = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }
    // seperate check for both array
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
}

void merge_sort(vector<int> &arr, int s, int e)
{
    while (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // left part chala ja bhai
    merge_sort(arr, s, mid);
    // right part chala ja bhai
    merge_sort(arr, mid + 1, e);

    // merge krde bhai
    merge(arr, s, e);
}

int main()
{
    vector<int> arr;
    input(arr);
    print(arr);
    merge_sort(arr, 0, arr.size() - 1);
    print(arr);
    return 0;
}