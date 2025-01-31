#include <iostream>
using namespace std;

// During the initialisation of update function, address of arr[] from main
// function is given to arr[] in update function not the actual storage blocks

void update(int arr[], int n)
{
    cout << endl
         << "Inside the Update Function " << endl;

    // Update the 1st element of array
    arr[0] = 123;

    // Printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Going back to main function " << endl;
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
    int arr[100]{1, 2, 3};

    // Before updating the elements of array
    cout << "Before updating " << endl;
    printArray(arr, 3);

    // After updating the elements of array
    cout << "After updating ";
    update(arr, 3);
    printArray(arr, 3);

    return 0;
}