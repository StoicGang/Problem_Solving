#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// finding the longest length of the subarray elements presents in the arary
int LongestSubArr(vector<int> arr)
{
    unordered_map<int, bool> num_map;
    // insert the elements into the unordered map
    for (int num : arr)
    {
        num_map[num] = true;
    }
    int maxLength = 0;
    for (int num : arr)
    {
        // Only start if num-1 is not present (start of a sequence)
        if (num_map.find(num - 1) == num_map.end())
        {
            int current_num = num;
            int length = 1;
            while (num_map.find(current_num + 1) != num_map.end()) // find if current_num +- 1 are present and increse the maxLength
            {
                current_num++;
                length++;
            }
            if (length > maxLength) // set maxLength if less than the Length
                maxLength = length;
        }
    }
    return maxLength; // return the MaxLength
}

// function to sort 0, 1 and 2
void sort012(vector<int> &arr)
{
    int low = 0, mid = 0, high = arr.size() - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0) // if mid=0 replace with low
        {
            swap(arr[mid++], arr[low++]);
        }
        else if (arr[mid] == 2) // if mid=2 replace with high
        {
            swap(arr[mid++], arr[high--]);
        }
        else
        {
            mid++;
        }
    }
}

int main()
{
    // vector<int> arr{100, 4, 200, 1, 2, 3};
    // cout << LongestSubArr(arr);

    vector<int> arr{0, 2, 1, 2, 0};
    sort012(arr);
    for (int val : arr)
    {
        cout << val << " ";
    }
    return 0;
}