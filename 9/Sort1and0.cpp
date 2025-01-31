#include <iostream>
using namespace std;

void sorting(int arr[], int size)
{
    int left = 0, right = size - 1;
    while (left < right)
    {
        if (arr[left] == 0 && left < right)
        {
            left++;
        }
        else if (arr[right] == 1 && left < right)
        {
            right--;
        }
        else if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void input(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[200]{};
    int size{0};
    cout << "Size: ";
    cin >> size;
    cout << "Elements : ";
    input(arr, size);
    cout << "Array Elements are : ";
    printArray(arr, size);
    sorting(arr, size);
    cout << "Sorted Array is : ";
    printArray(arr, size);
}