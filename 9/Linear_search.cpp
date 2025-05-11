/*
Title: Linear Search Implementation
Problem:
    Implement linear search to find an element in an unsorted array.

Input:
    - Integer array (can be unsorted)
    - Array size
    - Target value to search for

Output:
    - true if element found
    - false if element not found

Constraints:
    - Array size is fixed at compile time
    - All elements are integers
    - No specific ordering of elements required

Approach:
1. Linear Search:
    - Traverse array from start to end
    - Compare each element with target
    - Return true if match found
    - Return false after checking all elements
    Time Complexity: O(n)
    Space Complexity: O(1)
    where n = array size

Advantages:
    - Simple to implement
    - Works on unsorted arrays
    - Best for small arrays
    - No additional space needed

Example:
Input:
Array: [10, 2, 53, 64, 3, 12, 50, 6, 74, 8]
Target: 12
Output: true (element found)
*/

#include <iostream>
using namespace std;

bool linear_search(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (n == arr[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10]{10, 2, 53, 64, 3, 12, 50, 6, 74, 8};

    int magic_num{0};
    cout << "Enter the number you want to search : ";
    cin >> magic_num;
    cout << boolalpha; // returns true and false insted of 1 and 0
    bool result = linear_search(arr, 10, magic_num);
    cout << "Number " << magic_num << " is in array : " << result << endl;

    return 0;
}