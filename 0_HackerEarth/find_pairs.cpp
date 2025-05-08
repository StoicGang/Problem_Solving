#include <iostream>
#include <vector>
using namespace std;

int countPairs(vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i != j && (arr[i] - arr[j] == i - j))
            {
                count++;
            }
        }
    }
    return count;
}
void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    input(arr);
    cout << countPairs(arr);
}