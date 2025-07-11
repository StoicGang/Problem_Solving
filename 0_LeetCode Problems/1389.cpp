/*
 Title: 1389. Create Target Array in the Given Order

 Problem:
 Given two arrays of integers, nums and index, create a target array by inserting nums[i] at position index[i] in the target array for each i, from left to right. Return the resulting target array.

 Input:
 - nums: vector<int> of length n (1 <= n <= 100), where 0 <= nums[i] <= 100
 - index: vector<int> of length n, where 0 <= index[i] <= i
   (nums.length == index.length)

 Output:
 - vector<int> representing the target array after all insertions.

 Constraints:
 - 1 <= nums.length, index.length <= 100
 - nums.length == index.length
 - 0 <= nums[i] <= 100
 - 0 <= index[i] <= i
 - All insertions are guaranteed to be valid.

 Approach:
 1. Initialize an empty vector<int> target.
 2. Iterate through each element i in nums and index:
    a. Insert nums[i] at position index[i] in target using vector::insert.
    b. This operation shifts all elements at and after index[i] one position to the right.
 3. After processing all elements, return the target array.

 Time Complexity:
 - Each insertion at position index[i] in a vector takes O(k) time, where k is the number of elements after index[i].
 - In the worst case, for n elements, the total time complexity is O(n^2).

 Space Complexity:
 - O(n), where n is the length of nums, for storing the target array.
 */
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        vector<int> target; // initially empty
        if (nums.size() != index.size())
        {
            return target;
        }
        for (int i = 0; i < index.size(); i++)
        { // insert at the specific position
            target.insert(target.begin() + index[i], nums[i]);
        }
        return target;
    }
};