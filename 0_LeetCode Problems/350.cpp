/*
 Title: 350. Intersection of Two Arrays II

 Problem:
 Given two integer arrays nums1 and nums2, return an array of their intersection.
 Each element in the result must appear as many times as it shows in both arrays,
 and you may return the result in any order.

 Input:
 - nums1: vector<int> - First integer array.
 - nums2: vector<int> - Second integer array.

 Output:
 - vector<int> - Array of intersection elements, each appearing as many times as it shows in both arrays.

 Constraints:
 - 1 <= nums1.length, nums2.length <= 1000
 - 0 <= nums1[i], nums2[i] <= 1000

 Approaches:

 1. Counting Array (Current Approach)
    - Step 1: Initialize a counting array of size 1001 to zero.
    - Step 2: Iterate through nums1, incrementing the count for each number.
    - Step 3: Iterate through nums2, for each number, if its count is greater than zero,
              add it to the result and decrement its count.
    - Time Complexity: O(n + m), where n = nums1.size(), m = nums2.size()
    - Space Complexity: O(1) (since the counting array size is fixed, independent of input size)

 2. Hash Map Approach
    - Step 1: Use an unordered_map to count occurrences of each number in nums1.
    - Step 2: Iterate through nums2, for each number, if it exists in the map with count > 0,
              add it to the result and decrement the count.
    - Time Complexity: O(n + m)
    - Space Complexity: O(min(n, m)), for the hash map

 3. Sorting + Two Pointers
    - Step 1: Sort both nums1 and nums2.
    - Step 2: Use two pointers to traverse both arrays, adding common elements to the result.
    - Time Complexity: O(n log n + m log m)
    - Space Complexity: O(1) (if sorting in-place)

 4. Handling Large Data (Follow-up)
    - If nums2 is stored on disk and cannot be loaded into memory:
      - Store counts of nums1 in memory.
      - Stream nums2 from disk, for each element, check and update counts as above.
    - Time Complexity: O(n + m)
    - Space Complexity: O(n), where n = nums1.size()
*/
#include <vector>
class Solution
{
public:
    std::vector<int> intersect(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        std::vector<int> count(1001, 0);
        std::vector<int> result;

        for (int num : nums1)
        {
            count[num]++;
        }

        for (int num : nums2)
        {
            if (count[num] > 0)
            {
                result.push_back(num);
                count[num]--;
            }
        }

        return result;
    }
};
