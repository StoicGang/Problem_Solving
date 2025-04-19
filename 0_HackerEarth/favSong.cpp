/*
Problem: Favorite Singer (HackerEarth)
- Given a list of songs where each number represents a singer's ID
- Find number of favorite singers where favorite singers are those who appear maximum times in the list
- If multiple singers appear maximum times, all of them are considered favorites

Approach:
1. Sort the array to group same singer IDs together
2. Iterate through array while keeping track of:
    - Current count of consecutive same IDs (localcount)
    - Maximum count seen so far (maxcount)
    - Number of singers with maximum count (ans)
3. For each group of same IDs:
    - If localcount equals maxcount, increment number of favorite singers
    - If localcount is greater than maxcount, reset favorite singers count to 1
4. Return the total number of favorite singers

Time Complexity: O(nlogn) for sorting
Space Complexity: O(1) additional space
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

void input(vector<int> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cin >> ans[i];
    }
}

void print(vector<int> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int FavSingers(vector<int> &vec)
{
    if (vec.empty())
        return 0;
    if (vec.size() == 1)
        return 1;

    sort(vec.begin(), vec.end());
    int ans = 0;
    int maxcount = 0;
    size_t outerindex = 0;
    while (outerindex < vec.size())
    {
        int localcount = 1;
        size_t innerindex = outerindex + 1;
        while (innerindex < vec.size() && vec[innerindex] == vec[outerindex])
        {
            localcount++;
            innerindex++;
        }
        if (maxcount == localcount)
        {
            ans++;
        }
        else if (localcount > maxcount)
        {
            ans = 1;
            maxcount = localcount;
        }
        outerindex = innerindex;
    }
    return ans;
}

int main()
{
    int N;
    cin >> N;
    vector<int> songs(N);
    input(songs);
    cout << FavSingers(songs) << "\n";
    return 0;
}