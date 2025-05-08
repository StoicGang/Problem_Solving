#include <bits/stdc++.h>
using namespace std;

void printVEc(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> quickSort(vector<int> &arr)
{
    if (arr.size() <= 1)
    {
        return arr;
    }
    // set pivot at last position
    int pivot = arr[arr.size() - 1];
    // partition array
    vector<int> right, left;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] < pivot)
        {
            left.push_back(arr[i]);
        }
        else
        {
            right.push_back(arr[i]);
        }
    }
    // recursive call
    vector<int> sortedLeft = quickSort(left);
    vector<int> sortedRight = quickSort(right);
    // add left + pivot + right
    sortedLeft.push_back(pivot);
    sortedLeft.insert(sortedLeft.end(), sortedRight.begin(), sortedRight.end());
    return sortedLeft;
}

int main()
{
    vector<int> arr{4, 3, 1, 2, 5, 9};
    printVEc(arr);
    vector<int> merged = quickSort(arr);
    printVEc(merged);
}