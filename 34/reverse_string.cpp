#include <bits/stdc++.h>

using namespace std;

void reverse(string &a, int s, int e)
{
    if (s > e)
        return;
    swap(a[s], a[e]);
    reverse(a, s + 1, e - 1);
}

void ReverseO(string &a, int i)
{
    if (i > a.length() / 2)
    {
        return;
    }
    swap(a[i], a[a.length() - 1 - i]);
    ReverseO(a, i + 1);
}

int main()
{
    string a = "abcdef ";

    // reverse(a, 0, a.length() - 1);
    ReverseO(a, 0);
    cout << "Reversed string is :" << a << endl;
    return 0;
}