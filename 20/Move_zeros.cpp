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
    cout << endl;
}

void move_zeros(int arr[], int size)
{
    int non_zero = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[non_zero], arr[j]);
            non_zero++;
        }
    }
}

int main()
{
    int arr[20]{};
    int size{};
    cout << "Enter the size : ";
    cin >> size;
    cout << "Enter Array Elements containing zeros: ";
    input(arr, size);
    cout << "Array Before moving zeros : ";
    printArray(arr, size);
    cout << "Array after moving zeros : ";
    move_zeros(arr, size);
    printArray(arr, size);
    return 0;
}