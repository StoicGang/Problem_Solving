

/**
 * Title:
 *   88. Merge Sorted Array
 *
 * Problem:
 *   Given two sorted integer arrays nums1 and nums2, and their respective counts m and n,
 *   merge nums2 into nums1 as one sorted array in non-decreasing order. The merged result
 *   should be stored in nums1, which has enough space (size m + n) to hold all elements.
 *
 * Input:
 *   - vector<int>& nums1: The first sorted array with length m + n. The first m elements are valid,
 *     and the last n elements are set to 0 and should be ignored.
 *   - int m: The number of valid elements in nums1.
 *   - vector<int>& nums2: The second sorted array with length n.
 *   - int n: The number of valid elements in nums2.
 *
 * Output:
 *   - The merged sorted array is stored in nums1. The function does not return anything.
 *
 * Constraints:
 *   - nums1.length == m + n
 *   - nums2.length == n
 *   - 0 <= m, n <= 200
 *   - 1 <= m + n <= 200
 *   - -10^9 <= nums1[i], nums2[j] <= 10^9
 *
 * Step-by-Step Approach:
 *   1. Initialize three pointers:
 *      - i = m - 1: Points to the last valid element in nums1.
 *      - j = n - 1: Points to the last element in nums2.
 *      - k = m + n - 1: Points to the last position in nums1.
 *      Time Complexity: O(1)
 *
 *   2. Merge from the back:
 *      - While both i and j are valid (i >= 0 and j >= 0):
 *          - Compare nums1[i] and nums2[j].
 *          - Place the larger value at nums1[k], and decrement the corresponding pointer (i or j) and k.
 *      Time Complexity: O(m + n)
 *
 *   3. Copy any remaining elements from nums2:
 *      - If there are elements left in nums2 (j >= 0), copy them to nums1.
 *      - No need to copy from nums1, as they are already in place.
 *      Time Complexity: O(n)
 *
 *   Overall Time Complexity: O(m + n)
 *   Overall Space Complexity: O(1) (in-place merge)
 */
#include <vector>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        // Merge from the back
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                nums1[k--] = nums1[i--];
            }
            else
            {
                nums1[k--] = nums2[j--];
            }
        }

        // If there are remaining elements in nums2, copy them
        while (j >= 0)
        {
            nums1[k--] = nums2[j--];
        }
    }
};