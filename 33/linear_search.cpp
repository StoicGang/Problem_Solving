#include <bits/stdc++.h>

using namespace std;

bool LinearSearch(int arr[], int n, int key)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return LinearSearch(arr + 1, n - 1, key);
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int key = -1;
    cout << "Enter key: ";
    cin >> key;
    bool ans = LinearSearch(arr, 10, key);
    cout << boolalpha << ans;
    return 0;
}