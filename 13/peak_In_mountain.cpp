#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int start{0};
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return mid; // return start will also give the same answer
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 9, 8, 7};
    cout << "peak element is at : " << peakIndexInMountainArray(vec) << endl;
}