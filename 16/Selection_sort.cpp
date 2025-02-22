#include <iostream>
using namespace std;

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void input(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size)
{
    cout << "{ ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}";
}

int main()
{
    int arr[20]{};
    int size{};
    cout << "Enter Size : ";
    cin >> size;
    cout << "Enter Array Element : ";
    input(arr, size);
    cout << "Array Before Sorting is : ";
    printArray(arr, size);
    cout << endl;
    selection_sort(arr, size);
    cout << "Array After sorting is : ";
    printArray(arr, size);
    return 0;
}