// Binary search is like quickly flipping through a sorted book
// to find a word by halving the pages until you pinpoint it.

#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int left{0};
    int right{n - 1};
    int mid = left + (right - left) / 2;

    while (left <= right)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        // right side chala ja bhai
        if (arr[mid] < key)
        {
            left = mid + 1;
        }
        // left side chala ja bhai
        else
        {
            right = mid - 1;
        }
        mid = left + (right - left) / 2;
    }
    return -1;
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int inputs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int RBinary(int arr[], int start, int end, int key)
{
    if (start > end)
    {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (arr[mid] > key)
    {
        RBinary(arr, start, mid - 1, key);
    }

    return RBinary(arr, mid + 1, end, key);
}

int main()
{
    int arr[200]{};
    int size{0};
    int key{0};
    cout << "Enter the size : ";
    cin >> size;
    cout << "Enter array elements :";
    inputs(arr, size);
    cout << "Array : ";
    printarray(arr, size);

    cout << "Enter the element you want to search : ";
    cin >> key;
    // cout << binary_search(arr, size, key);
    cout << "Element is present at : " << RBinary(arr, 0, size - 1, key);
    return 0;
}