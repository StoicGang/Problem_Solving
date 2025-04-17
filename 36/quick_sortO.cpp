#include <bits/stdc++.h>
using namespace std;

vector<int> quickSort(vector<int> arr)
{
    // Base case
    if (arr.size() <= 1)
        return arr;

    int pivot = arr[arr.size() - 1]; // Choosing last element as pivot
    vector<int> left, right;

    for (int i = 0; i < arr.size() - 1; ++i)
    {
        if (arr[i] < pivot)
            left.push_back(arr[i]);
        else
            right.push_back(arr[i]);
    }

    vector<int> sortedLeft = quickSort(left);
    vector<int> sortedRight = quickSort(right);

    // Concatenate: sortedLeft + pivot + sortedRight
    sortedLeft.push_back(pivot);
    sortedLeft.insert(sortedLeft.end(), sortedRight.begin(), sortedRight.end());

    return sortedLeft;
}

int main()
{
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    vector<int> sortedArr = quickSort(arr);

    cout << "Sorted array: ";
    for (int num : sortedArr)
        cout << num << " ";
    cout << endl;

    return 0;
}