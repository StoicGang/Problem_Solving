// write a code to get the uniquly occuring elements of an array

#include <iostream>
using namespace std;

void printUniqueOnce(int arr[], int size)
{
    cout << "Unique elements are: [ ";
    for (int i = 0; i < size; i++)
    {
        bool isPrinted = false;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isPrinted = true;
                break;
            }
        }
        if (!isPrinted)
        {
            cout << arr[i] << " ";
        }
    }
    cout << "]" << endl;
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
    cout << "[ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int main()
{
    int arr[200]{};
    int size{};

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    input(arr, size);

    cout << "Array Elements are: ";
    printArray(arr, size);

    printUniqueOnce(arr, size);

    return 0;
}
