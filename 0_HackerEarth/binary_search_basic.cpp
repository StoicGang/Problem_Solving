#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lowerBound(vector<int> &vec, int key)
{
    int start = 0;
    int end = vec.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (vec[mid] >= key)
        {
            ans = vec[mid];
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int upperBound(vector<int> &vec, int key)
{
    int start = 0;
    int end = vec.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (vec[mid] > key)
        {
            ans = vec[mid];
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

bool binary_search(vector<int> &vec, int key)
{
    int start = 0;
    int end = vec.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (vec[mid] == key)
        {
            return true;
        }
        else if (key < vec[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
}

void input(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
}

int main()
{
    int num;
    cin >> num;
    vector<int> vec(num);
    input(vec);
    int totalSearch = 0;
    cin >> totalSearch;
    sort(vec.begin(), vec.end());

    int key = 0;
    while (totalSearch != 0)
    {
        int key = 0;
        cin >> key;
        if (binary_search(vec, key))
        {
            cout << "YES ";
            cout << lowerBound(vec, key) << " " << upperBound(vec, key) << endl;
        }
        else
        {
            cout << "NO ";
            cout << lowerBound(vec, key) << " " << upperBound(vec, key) << endl;
        }
        totalSearch--;
    }
}