/*
Title: Rotate Array

Problem:
- Rotate array to right by k steps
- Each step moves last element to front
- Must modify array in-place

Input:
- Integer array nums
- Non-negative integer k (steps to rotate)
- Example: nums = [1,2,3,4,5,6,7], k = 3

Output:
- Same array rotated k steps right
- Example: [5,6,7,1,2,3,4]

Constraints:
- 1 <= nums.length <= 10^5
- -2^31 <= nums[i] <= 2^31 - 1
- 0 <= k <= 10^5

Approaches:
1. Reversal Method (Optimal)
   - Reverse entire array
   - Reverse first k elements
   - Reverse remaining n-k elements
   Time: O(n)
   Space: O(1)

2. Extra Array (Simple)
   - Store rotated elements in temp array
   - Copy back to original array
   Time: O(n)
   Space: O(n)

Time Complexity: O(n)
Space Complexity: O(1) for optimal solution
*/