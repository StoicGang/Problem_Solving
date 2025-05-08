#include <bits/stdc++.h>
using namespace std;

void sort_colors(vector<int> &arr)
{
    int s = 0, e = arr.size() - 1, mid = 0;
    while (mid <= e)
    {
        if (arr[mid] == 0)
        {
            swap(arr[s], arr[mid]);
            s++;
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[e]);
            e--;
        }
        else
        {
            mid++;
        }
    }
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
    vector<int> arr{0, 1, 0, 0, 1, 1, 1, 2, 2, 1, 0};
    print(arr);
    sort_colors(arr);
    print(arr);
    return 0;
}