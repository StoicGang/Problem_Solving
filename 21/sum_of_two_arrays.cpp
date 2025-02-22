#include <bits/stdc++.h>

using namespace std;

void reverse_array(vector<int> &nums)
{
    int i = 0;
    int j = nums.size() - 1;
    while (i <= j)
    {
        swap(nums[i], nums[j]);
        i++;
        j--;
    }
}

vector<int> sum_of_arrays(vector<int> &nums1, int n, vector<int> &nums2, int m)
{
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> ans;
    while (i >= 0 && j >= 0)
    {
        int val1 = nums1[i];
        int val2 = nums2[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = nums1[i] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        i--;
    }
    while (j >= 0)
    {
        int sum = nums2[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        j--;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
    }

    reverse_array(ans);
    return ans;
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
    vector<int> nums1;
    nums1.push_back(7);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(8);

    vector<int> nums2;
    nums2.push_back(7);
    nums2.push_back(2);
    nums2.push_back(3);
    nums2.push_back(8);

    cout << "array1 is : ";
    printVector(nums1);

    cout << "Array2 is : ";
    printVector(nums2);

    vector<int> sum = sum_of_arrays(nums1, nums1.size(), nums2, nums2.size());
    printVector(sum);

    return 0;
}