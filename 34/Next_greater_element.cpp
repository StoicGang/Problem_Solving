#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &arr, int n)
{
    vector<int> nge(n, -1);
    vector<int> temp;
    for (int i = n - 1; i >= 0; --i)
    {
        while (!temp.empty() && temp.back() <= arr[i])
        {
            temp.pop_back();
        }
        if (!temp.empty())
        {
            nge[i] = temp.back();
        }
        temp.push_back(arr[i]);
    }

    return nge;
}
void printVector(const vector<int> &vec)
{
    for (int num : vec)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr[5];
    arr->push_back(0);
    arr->push_back(1);
    arr->push_back(0);
    arr->push_back(3);
    arr->push_back(12);
    printVector(*arr);
    vector<int> arr1 = nextGreaterElement(*arr, 5);
    printVector(arr1);
}