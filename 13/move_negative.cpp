#include <bits/stdc++.h>
using namespace std;

vector<int> separateNegativeAndPositive(vector<int> &nums)
{
    int i = 0, j = nums.size() - 1;

    while (i <= j)
    {
        // If nums[i] is positive and nums[j] is negative, swap them
        if (nums[i] > 0 && nums[j] < 0)
        {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        // If nums[i] is negative, move i forward
        else if (nums[i] <= 0)
        {
            i++;
        }
        // If nums[j] is positive, move j backward
        else if (nums[j] >= 0)
        {
            j--;
        }
    }

    return nums;
}

void print(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums{-16, 9, -25, 8, 44, 20, 20, -12, 11, -44, -32, 0, 41, 13, 7, 27, -49, -19, -43, 6};
    print(nums);
    separateNegativeAndPositive(nums);
    print(nums);
    return 0;
}
