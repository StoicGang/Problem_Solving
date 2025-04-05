#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string &a, int s, int e)
{
    if (s >= e)
    {
        return true;
    }
    if (a[s] != a[e])
    {
        return false;
    }
    else
    {
        return is_palindrome(a, s + 1, e - 1);
    }
}

bool is_palindromeO(string &a, int s)
{
    if (s > a.length() / 2)
    {
        return true;
    }
    else if (a[s] != a[a.length() - 1 - s])
    {
        return false;
    }
    return is_palindromeO(a, s + 1);
}

int main()
{
    string a = "helleh";
    cout << is_palindromeO(a, 0);
    return 0;
}