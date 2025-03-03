#include <bits/stdc++.h>

using namespace std;

string removeDuplicates(string s)
{
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (j > 0 && s[j - 1] == s[i])
        {
            j--;
        }
        else
        {
            s[j] = s[i];
            j++;
        }
    }
    s.resize(j);
    return s;
}

int main()
{
    string s = "azxxzy";
    cout << removeDuplicates(s);
}