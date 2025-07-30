// arrays are sorted
#include <iostream>
#include <vector>
using namespace std;

vector<int> findCommon(vector<int> a, vector<int> b, vector<int> c)
{
    vector<int> ans;
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size() && k < c.size())
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            if (ans.empty() || ans.back() != a[i])
            {
                ans.push_back(a[i]);
            }
            i++, j++, k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    return ans;
}

int main()
{
    vector<int> a{1, 2, 3, 4, 5, 6, 7};
    vector<int> b{2, 4, 7, 9, 10, 34};
    vector<int> c{2, 7, 3, 4, 7};
    vector<int> ans = findCommon(a, b, c);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}