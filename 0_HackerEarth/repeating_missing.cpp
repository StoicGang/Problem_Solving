#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findRepeatingAndMissing(vector<int> arr, int n)
{
    int miss = 0, dupli = 0;
    unordered_map<int, int> counter;
    for (int val : arr)
    {
        counter[val]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (counter[i] == 0)
            miss = i;
        else if (counter[i] > 1)
            dupli = i;
    }

    return {min(miss, dupli), max(miss, dupli)};
}

int main()
{
    int num;
    cin >> num;
    vector<int> arr;
    for (int i = 0; i < num; ++i)
    {
        int n;
        cin >> n;
        arr.push_back(n);
    }
    vector<int> results = findRepeatingAndMissing(arr, num);
    cout << results[0] << " " << results[1] << endl;
    return 0;
}