#include <bits/stdc++.h>
using namespace std;

// bruteforce approach
int firstRepeatedB(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                return i + 1;
            }
        }
    }
    return -1;
}

// optimal count approach
int firstRepeatedO(vector<int> &arr)
{
    vector<int> counts(1e6 + 1, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        counts[arr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (counts[arr[i]] > 1)
        {
            return i + 1;
        }
    }
    return -1;
}

// optimal count with unordered_map
int firstRepeatedUM(vector<int> &arr)
{
    unordered_map<int, int> count;
    for (int i = 0; i < arr.size(); i++)
    {
        count[arr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (count[arr[i]] > 1)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 5, 3, 4, 3, 5, 6};

    // Using bruteforce approach
    cout << "First repeating element index (bruteforce): " << firstRepeatedB(arr) << endl;

    // Using optimal count approach
    cout << "First repeating element index (optimal): " << firstRepeatedUM(arr) << endl;

    return 0;
}