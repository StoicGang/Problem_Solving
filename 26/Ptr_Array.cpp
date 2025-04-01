#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    int arr[10]{2, 3, 4, 5, 5, 7, 1, 9, 0, 6};
    cout << "Address of the first memory block of array is : " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of the first memory block of array is : " << &arr[0] << endl;

    cout << "Value at index 0 is " << *arr << endl;
    cout << "Value at index 0 is " << arr[0] << endl;

    cout << "Incremented 0th index : " << *arr + 1 << endl;
    cout << "1st index : " << *(arr + 1) << endl;
    cout << "Incremented 0th index : " << *(arr) + 1 << endl;
    int i = 4;
    cout << i[arr] << endl; // return arr element at 4th index
    */

    int temp[10] = {4, 5};
    cout << sizeof(temp) << endl;
    cout << "1st " << sizeof(*temp) << endl;
    cout << "2nd " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;

    /*
    int a[20] = {1, 2, 3, 4, 5};
    cout << " -> " << &a[0] << endl;
    // cout << &a << endl;
    // cout << a << endl;

    int *p = &a[0];
    cout << " -> " << &p << endl;
    // cout << p << endl;
    // cout << *p << endl;

    */
    return 0;
}