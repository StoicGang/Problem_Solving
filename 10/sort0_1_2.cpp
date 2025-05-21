#include <iostream>
using namespace std;

void sort1_2_0(int arr[], int size)
{
    int left{0};
    int right{size - 1};
    int mid{0};
    while (mid <= right)
    {
        if (arr[mid] == 0)
        {
            swap(arr[left], arr[mid]);
            left++;
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[right]);
            right--;
        }
        else
        {
            mid++;
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

    cout << "size :";
    cin >> size;

    cout << "Element (Only (1,2,0)): ";
    input(arr, size);

    cout << "Array Elements are: ";
    printArray(arr, size);

    sort1_2_0(arr, size);

    cout << "Sorted Array : ";
    printArray(arr, size);
    return 0;
}