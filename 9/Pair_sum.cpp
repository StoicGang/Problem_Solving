// write a code to find the sum of alternate number pair
#include <iostream>
using namespace std;

void alternate_sum(int arr[], int n)
{
    cout << "Sum of alternate elements in array : [ ";
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        int sum{0};
        if (j < n)
        {
            sum = arr[i] + arr[j];
        }
        // else if (j=n)
        // {
        //     sum = arr[0] + arr[i];
        // }

        cout << sum << " ";
    }
    cout << "]";
}

void input(int array[], int n)
{
    cout << "Enter the Array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

void printArray(int arr[], int n)
{
    cout << "Elements of Array : [ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;
}

int main()
{
    int arr[200]{};
    int size{0};
    cout << "Size : ";
    cin >> size;
    input(arr, size);
    printArray(arr, size);

    alternate_sum(arr, size);

    return 0;
}