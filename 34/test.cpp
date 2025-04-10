#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int s = 0;
    while (s < nums.size() - 1)
    {
        int n = s + 1;
        if (nums[s] == 0 && nums[n] != 0)
        {
            swap(nums[s], nums[n]);
            s++;
        }
        if (nums[s] == 0 && nums[n] == 0)
        {
            while (nums[n] == 0 && n < nums.size() - 1)
            {
                n++;
            }
            if (nums[n] != 0)
            {
                swap(nums[s], nums[n]);
            }
            s++;
        }
        s++;
    }
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
    moveZeroes(*arr);
    printVector(*arr);
    return 0;
}