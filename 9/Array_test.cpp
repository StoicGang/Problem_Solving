/*
Title: Array Operations Test Suite
Problem:
    Implementation of common array operations including:
    - Array element doubling
    - Element replacement
    - Counting specific elements (0s and 1s)
    - Finding max/min elements
    - Finding extreme elements (alternating max/min)

Input:
    - Integer array
    - Array size

Output:
    - Modified array or computed values based on operation

Constraints:
    - Array size > 0
    - Elements are integers within INT range

Approaches:
1. Array Doubling
    - Simple array traversal and multiplication
    Time: O(n), Space: O(1)

2. Counting Elements
    - Single pass counting of 0s and 1s
    Time: O(n), Space: O(1)

3. Max/Min Finding
    - Track max and min while traversing array once
    Time: O(n), Space: O(1)

4. Extreme Elements
    - Keep track of alternating max/min elements
    Time: O(n), Space: O(n) for result vector

Example:
Input array: [18, 20, 63, 94, 25]
After doubling: [36, 40, 126, 188, 50]
Max/Min: {94, 18}
*/

#include <bits/stdc++.h>
using namespace std;

void doubleArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] *= 2;
    }
}

void printarr(int arr[], int n)
{
    cout << "Array :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printVec(vector<int> vec)
{
    cout << "Vector :";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void replaceOne(int arr[], int n)
{
    cout << "Replacing with 1 :\n";
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1;
    }
}

vector<int> counting(int arr[], int n)
{
    vector<int> temp;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            count2++;

        else
            count1++;
    }
    temp.push_back(count1);
    temp.push_back(count2);
    return temp;
}

vector<int> maxmin(int arr[], int n)
{
    vector<int> temp;
    int maxi = INT_MIN, mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
    temp.push_back(maxi);
    temp.push_back(mini);
    return temp;
}

vector<int> extreme(int arr[], int n)
{
    int start = 0, end = n - 1;
    vector<int> temp;
    while (start < end)
    {
        temp.push_back(arr[start++]);
        temp.push_back(arr[end--]);
    }
    return temp;
}

int main()
{
    int arr[9]{18, 20, 63, 94, 25, 56, 7, 38, 19};
    // printarr(arr, 10);
    // doubleArr(arr, 10);
    // printarr(arr, 10);
    // replaceOne(arr, 10);
    // printarr(arr, 10);
    // int arr1[10]{1, 0, 1, 1, 1, 0, 0, 0, 0, 1};
    // vector<int> temp = counting(arr, 10);
    // cout << "No of zeros : " << temp[0];
    // cout << "\nNo of Ones : " << temp[1];
    // vector<int> maxi = maxmin(arr, 10);
    // cout << "Max : " << maxi[0];
    // cout << "\nMin: " << maxi[1];
    vector<int> extremes = extreme(arr, 9);
    printVec(extremes);
    return 0;
}