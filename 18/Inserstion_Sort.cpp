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

void Insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
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
    Insertion_sort(arr, size);
    cout << "Array After sorting : ";
    printArray(arr, size);
}