// write a code to find the unique element of array or elements of an array

#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    // finding the unique element of array
    int unique{0};
    for (int i{0}; i < size; i++)
    {
        unique ^= arr[i];
    }
    return unique;
}

// Logic_1 ==> using boolean operator
void findUnique_elements(int arr[], int size)
{
    cout << "Unique elements are : [ ";

    for (int i = 0; i < size; i++)
    {
        bool is_unique = true;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                is_unique = false;
                break;
            }
        }
        if (is_unique)
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
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[200]{};
    int size{};

    cout << "Size: ";
    cin >> size;

    cout << "Enter elements of array : ";
    input(arr, size);
    cout << "Array Elements are : [ ";
    printArray(arr, size);
    cout << "]" << endl;
    int unique = findUnique(arr, size);
    cout << "Unique element is : " << unique << endl;
    // findUnique_elements(arr, size);
    return 0;
}