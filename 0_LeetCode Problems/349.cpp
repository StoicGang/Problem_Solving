/*
Title: Intersection of Two Arrays

Problem:
- Find intersection of two arrays
- Each element in result must be unique
- Order of elements in output can be any order

Input:
- Two integer arrays nums1 and nums2
- Example: nums1 = [1,2,2,1], nums2 = [2,2]

Output:
- Array containing common elements (no duplicates)
- Example: [2]

Constraints:
- 1 <= nums1.length, nums2.length <= 1000
- 0 <= nums1[i], nums2[i] <= 1000
- Return result in any order

Approaches:
1. Sorting and Two Pointers (Current)
   - Sort both arrays
   - Use two pointers to find common elements
   - Skip duplicates
   Time: O(nlogn + mlogm)
   Space: O(min(n,m)) for result

2. HashSet Method (Alternative)
   - Convert first array to set
   - Check elements of second array
   - Add common elements to result
   Time: O(n + m)
   Space: O(n) for hash set

Time Complexity: O(nlogn + mlogm)
Space Complexity: O(min(n,m))
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                if (result.empty() || result.back() != nums1[i])
                {
                    result.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return result;
    }
};