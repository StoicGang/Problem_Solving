#include <bits/stdc++.h>

using namespace std;

void input(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size)
{
    cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
}

void merge_arrays(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++]; // This line is less code of following 3 lines
            // arr3[k] = arr1[i];
            // k++;
            // i++;
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < size1)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < size2)
    {
        arr3[k++] = arr2[j++];
    }
}

// This is the solution of the codestudio problem. To merge two sorted array

vector<int> merge_sorted_arrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    vector<int> arr3;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3.push_back(arr1[i++]);
        }
        else
        {
            arr3.push_back(arr2[j++]);
        }
    }
    while (i < m)
    {
        arr3.push_back(arr1[i++]);
    }
    while (j < n)
    {
        arr3.push_back(arr2[j++]);
    }
    return arr3;
}

int main()
{
    int arr1[20]{}, arr2[20]{}, arr3[20]{};
    int size1{}, size2{};
    cout << "Enter the sizes : ";
    cin >> size1 >> size2;
    cout << "Enter Array1 Elements : ";
    input(arr1, size1);
    cout << "Enter Array2 Elements : ";
    input(arr2, size2);
    cout << "Array Before Merging : ";
    cout << "\nArray 1 :";
    printArray(arr1, size1);
    cout << "\nArray 2 : ";
    printArray(arr2, size2);
    cout << "\nArray after merging";
    merge_arrays(arr1, size1, arr2, size2, arr3);
    printArray(arr3, (size1 + size2));
    return 0;
}