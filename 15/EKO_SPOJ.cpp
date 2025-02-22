/* EKO SPOJ
Lumberjack Mikro Needs to chop down M meter of woods. It is easy job for him, since he has a nifty
new woodcutting machine that can take down forests like wildfire. However,Mirko is only allowed to cut
a single row of trees.
Mirko's machine works as follows: Mirko sets a  height parameter H(in meters), and machine
raises a giant sawblade to that height and cuts off all the tree parts higher than H, (of course
Trees not higher than H meters remain intact). Mirko then takes the parts that were cut off.
For example, if the tree row contains trees with heights of 20, 15, 10, and 17 meters
and Mirko raises his saw blade to 15 meters. The remaining tree heights after cutting
will be 15, 15, 10, and 15 meters, respectively. While Mirko will take 5 meters of the first
tree and 2 meters of the fourth tree. mirko is ecologically minded, so he does not want to cut
off more than more wood than necessary. That's why he want to set his sawblade as high as possible.
Help Mirko find the maximum integer height of  sawblade that still allow him to cut off at least M meters of wood.

Input
The first line of input contains two space separated positive integers, N (the number of trees, 1<= N >= 1000000)
and M(Mirko's required wood amount, 1<= M >= 2000000000).
The second line of input contains space-separated positive integers less than 1,000,000,000. The height of each tree (in meters).
The sum of all heights will exceed M, thus Milko will always be able to obtain the required amount of wood.

Output
The first and only line of output must contain the required height setting.

Example 1
Input:
4 7
20 15 10 17

Output:
15

Example 2
Input:
5 20
4 42 40 26 46

Output:
36

*/

#include <iostream>

using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int maxHeight = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            maxHeight += (arr[i] - mid);
        }
    }
    return maxHeight >= m;
}

int maxHeightCal(int arr[], int n, int m)
{
    int s = 0, ans = -1, maxVal = 0;
    for (int i = 0; i < n; i++)
    {
        maxVal = max(arr[i], maxVal);
    }
    int e = maxVal;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[4]{20, 15, 10, 17};
    cout << maxHeightCal(arr, 4, 7) << endl;

    // int arr2[5]{4, 42, 40, 26, 46};
    // cout << maxHeightCal(arr2, 5, 20);
    return 0;
}