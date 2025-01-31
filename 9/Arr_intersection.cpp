// write a code to find the intersection of two arrays
#include <iostream>
using namespace std;

void Intersection(int arr1[], int arr2[])
{
    cout << "Intersection of two arrays is : [ ";
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
    cout << "]";
}

void printArray(int arr[], int n)
{
    cout << "[ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;
}

void input(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

int main()
{
    int arr1[200]{};
    int size1{0};
    int arr2[200]{};
    int size2{0};

    cout << "Size of Array 1, Array 2 : ";
    cin >> size1 >> size2;

    cout << "Enter 10 array 1 element :";
    input(arr1, size1);
    cout << "Enter 7 array 2 element :";
    input(arr2, size2);
    cout << "Array 1 : ";
    printArray(arr1, size1);
    cout << "Array 2 : ";
    printArray(arr2, size2);

    Intersection(arr1, arr2);

    return 0;
}