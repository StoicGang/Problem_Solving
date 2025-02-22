#include <bits/stdc++.h>

using namespace std;

bool check(vector<int> &nums)
{
    int count = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] = nums[i])
        {
            count++;
        }
    }
    if (nums[0] < nums[nums.size() - 1])
    {
        count++;
    }
    return count <= 1;
}

void printVector(vector<int> &nums)
{
    cout << "[ ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << "]" << endl;
}

int main()
{
    vector<int> nums;
    nums.push_back(11);
    nums.push_back(7);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(8);
    nums.push_back(10);

    cout << "Vector is : ";
    printVector(nums);

    cout << "Array is rotated ans sorted or not : ";
    cout << check(nums);

    return 0;
}