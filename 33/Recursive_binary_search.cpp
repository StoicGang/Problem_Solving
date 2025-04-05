#include <bits/stdc++.h>

using namespace std;

bool binary_search(int arr[], int s, int e, int key)
{

    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return true;
    }
    else if (arr[mid] > key)
    {
        binary_search(arr, s, e = mid - 1, key);
    }
    else
    {
        binary_search(arr, s = mid + 1, e, key);
    }
}

int main()
{
    int arr[10] = {4, 6, 23, 63, 74, 7, 12, 79, 97, 64};
    sort(arr, arr + 10);
    int key;
    cout << "Enter Number to search : ";
    cin >> key;
    cout << "Number is present:" << boolalpha << binary_search(arr, 0, 10, key);
    return 0;
}