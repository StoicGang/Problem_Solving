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

void BubbleSort(int arr[], int size)
{
    bool isSwapped = false;
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (!isSwapped)
        {
            break;
        }
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
    cout << "Array Before Sorting : ";
    printArray(arr, size);
    cout << endl;
    BubbleSort(arr, size);
    cout << "Array After sorting : ";
    printArray(arr, size);
}