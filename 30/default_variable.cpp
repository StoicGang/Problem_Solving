#include <bits/stdc++.h>

using namespace std;

void print(int arr[], int size, int start = 0) // default value of start is 0
{
    for (int i = start; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 4, 3, 5};
    int size = 5;
    print(arr, size);
    print(arr, size, 3);
    return 0;
}