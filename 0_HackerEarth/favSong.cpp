/*
Title: Favorite Singer
Problem:
    Given a list of songs where each number represents a singer's ID, find the
    number of favorite singers. Favorite singers are those who appear maximum
    times in the list. If multiple singers appear maximum times, all are favorites.

Input:
    - Single integer N (number of songs)
    - N space-separated integers (singer IDs for each song)

Output:
    - Single integer representing number of favorite singers

Constraints:
    - 1 ≤ N ≤ 10^5
    - 1 ≤ singer ID ≤ 10^9
    - At least one song is always present

Approaches:
1. Sort and Count (Current Implementation)
    - Sort array to group same singer IDs together
    - Count consecutive occurrences of each ID
    - Track maximum frequency and number of singers with that frequency
    Time Complexity: O(n log n)
    Space Complexity: O(1)

2. Hash Map Approach (Alternative)
    - Store frequency of each singer in hash map
    - Find maximum frequency
    - Count singers with maximum frequency
    Time Complexity: O(n)
    Space Complexity: O(n)
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