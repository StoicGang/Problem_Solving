#include <iostream>
#include <vector>
#include <algorithm>
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

int favSong(vector<int> &vec)
{
    if (vec.size() == 0)
    {
        return -1;
    }
    if (vec.size() == 1)
    {
        return vec[0];
    }
    int maxcount = 0;
    int maxelement = vec[0];
    int index = 0;
    int n = vec.size();
    sort(vec.begin(), vec.end());
    while (index < n)
    {
        int innerIndex = index + 1;
        int count = 1;
        while (vec[index] == vec[innerIndex])
        {
            vec[innerIndex] = -1;
            count++;
            innerIndex++;
            if (innerIndex == n)
            {
                break;
            }
        }
        if (count > maxcount)
        {
            maxcount = count;
            maxelement = vec[index];
        }
        if (count == maxcount)
        {
            maxelement = max(maxelement, vec[index]);
        }
        index = innerIndex;
    }
    return maxelement;
}

int main()
{
    int N;
    cin >> N;
    vector<int> songs(N);
    input(songs);
    cout << favSong(songs) << "\n";
    return 0;
}