#include <bits/stdc++.h>
using namespace std;

// Function definition
int maximumNonAdjacentSum(vector<int> &nums)
{
    int prev1 = nums[0];
    int prev2 = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        int pick = nums[i] + prev2;
        int skip = prev1;
        int current = max(pick, skip);
        prev2 = prev1;
        prev1 = current;
    }
    return prev1;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int result = maximumNonAdjacentSum(nums);
    cout << "Maximum sum of non-adjacent elements is: " << result << endl;

    return 0;
}
