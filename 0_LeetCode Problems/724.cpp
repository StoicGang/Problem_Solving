/*
Find Pivot Index
Solved
Easy
Topics
Companies
Hint
Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.

 

Example 1:

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
Example 2:

Input: nums = [1,2,3]
Output: -1
Explanation:
There is no index that satisfies the conditions in the problem statement.
Example 3:

Input: nums = [2,1,-1]
Output: 0
Explanation:
The pivot index is 0.
Left sum = 0 (no elements to the left of index 0)
Right sum = nums[1] + nums[2] = 1 + -1 = 0
*/

//Bruteforce

int findpivot(int arr[], int n){
    for(int i=0; i<n-1;i++){
        int leftsum=0, rightsum=0;
        for(int j=0; j<i; j++){
            leftsum += arr[j];
        }
        for(int j=i+1; j<n; j++){
            rightsum +=arr[j];
        }
        if(leftsum ==rightsum){
            return i;
        }
    }
    return -1;
}

int findpivot(int arr[], int n){
    int start=0;
    int end = n-1;
    int rightsum=0, leftsum=0;
    for (int i = 0; i < n; i++)
    {
        rightsum = rightsum + arr[i];
    }
    for(int i=0; i<n; i++){
        rightsum -= arr[i];
        if(rightsum == leftsum){
            return i;
        }
        leftsum += arr[i];
    }
    return -1;
}