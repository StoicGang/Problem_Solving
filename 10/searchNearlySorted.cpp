#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (mid - 1 >= start && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (mid + 1 <= end && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 2;
        }
        else if (arr[mid] > target)
        {
            end = mid - 2;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
    for (int num : arr)
    {
        cout << num << " ";
    }

    cout << "\nElement 20 is present at index " << search(arr, 20);

    return 0;
}