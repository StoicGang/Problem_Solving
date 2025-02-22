#include <iostream>
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

void reverse_array(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int arr[20]{};
    int size{};
    cout << "Enter the size : ";
    cin >> size;
    cout << "Enter Array Elements : ";
    input(arr, size);
    cout << "Array Before Reversing : ";
    printArray(arr, size);
    cout << endl;
    reverse_array(arr, size);
    cout << "Array After Reversing: ";
    printArray(arr, size);
    return 0;
}