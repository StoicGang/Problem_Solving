#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &arr, int target)
{
    int s = 0, e = arr.size();
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if ((arr[mid - 1] == target) && (mid - 1 >= s))
        {
            return mid - 1;
        }
        if ((arr[mid + 1] == target) && (mid + 1) < e)
        {
            return mid + 1;
        }
        if (target > arr[mid])
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }
    }
    return -1;
}

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr{10, 2, 40, 20, 50, 80, 70};
    print(arr);
    int target = 0;
    cin >> target;
    cout << target << " is present at : " << binary_search(arr, target);
    return 0;
}