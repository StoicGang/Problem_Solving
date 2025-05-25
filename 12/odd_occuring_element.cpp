#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> oddOccuring(vector<int> &arr)
{
    int maxElement = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        maxElement = max(maxElement, arr[i]);
    }
    vector<int> temp(maxElement + 1, 0);
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        temp[arr[i]]++;
    }
    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i] & 1)
        {
            result.push_back(i);
        }
    }
    return result;
}

// if numbers are in pairs (single element is odd occuring)

int solve(vector<int> &arr)
{
    int s = 0, e = arr.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (s == e)
        {
            // single element
            return s;
        }
        // mid is even or odd
        if (mid & 1)
        {
            // odd
            if (arr[mid] == arr[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        else
        {
            // even
            if (arr[mid] == arr[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }
    }
    return -1;
}

int main()
{
    // vector<int> arr{1, 1, 2, 3, 4, 3, 1, 2, 3, 4, 1, 4, 2, 5, 3, 9};
    // vector<int> result = oddOccuring(arr);
    // print(result);

    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 2, 2, 5, 5};
    int ans = solve(arr);
    cout << "index is : " << ans << endl;
    cout << "value is : " << arr[ans] << endl;
    return 0;
}