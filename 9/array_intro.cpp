#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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
    int arr[5]{1, 2, 3, 4, 5};
    cout << "0th index : " << arr[0] << endl;
    cout << "1st index : " << arr[1] << endl;
    cout << "4th index : " << arr[4] << endl;
    cout << "Size of arr : " << sizeof(arr) / sizeof(int) << endl;

    char arrq[5]{'a', 'b', 'c', 'd', 'e'};
    cout << "0th index : " << arrq[0] << endl;
    cout << "1st index : " << arrq[1] << endl;
    cout << "4th index : " << arrq[4] << endl;
    cout << "Size of arr : " << sizeof(arrq) / sizeof(char) << endl;

    int arr2[5]{4, 2, 5, 3, 6};
    cout << "Before Sorting ";
    printArray(arr2, 5);
    sort(arr2, arr2 + 5);
    cout << "After Sorting ";
    printArray(arr2, 5);
    return 0;
}