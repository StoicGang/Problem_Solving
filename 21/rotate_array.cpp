#include <bits/stdc++.h>

using namespace std;

void rotate_array(vector<int> &nums, int k)
{
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
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

    int k = 0;
    cout << "Enter number after which you want to rotate the array : ";
    cin >> k;

    cout << "Vector after rotation : ";
    rotate_array(nums, k);
    printVector(nums);

    return 0;
}