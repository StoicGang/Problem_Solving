/*
Title: Array Sum Problem
Problem: Calculate the sum of all elements in an array of integers
=================================================================
Input:
- First line: Single integer N (size of array)
- Second line: N space-separated integers (array elements)

Output:
- Single integer representing sum of all array elements

Constraints:
- 1 <= N <= 10
- 0 <= arr[i] <= 10^10

Approach:
1. Input array size N and create vector of size N
    Time: O(1), Space: O(1)

2. Input N integers into vector using input() function
    Time: O(N), Space: O(N)

3. Calculate sum using sum() function:
    - Initialize sum variable as long long (for large numbers)
    - Iterate through array once, adding each element to sum
    Time: O(N), Space: O(1)

4. Output final sum
    Time: O(1), Space: O(1)

Overall Complexity:
Time Complexity: O(N)
Space Complexity: O(N)

Note: Using long long data type to handle large integer sums
*/
#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &arr)
{
    long long ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans += arr[i];
    }
    return ans;
}

void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int num;
    cin >> num;
    vector<int> arr(num);
    input(arr);
    long long result = sum(arr);
    cout << result;
    return 0;
}