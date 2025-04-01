#include <bits/stdc++.h>

using namespace std;

bool isvalid(char ch)
{
    return (ch >= 'a' && ch <= 'z') ||
           (ch >= '0' && ch <= '9') ||
           (ch >= 'A' && ch <= 'Z');
}
char to_lower(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool isPossible(string a)
{
    int s = 0;
    int e = a.length() - 1;
    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

bool isPalindrome(string s)
{
    string temp{};
    for (int i = 0; i < s.length(); i++)
    {
        if (isvalid(s[i]))
        {
            temp.push_back(to_lower(s[i]));
        }
    }
    return isPossible(temp);
}

int main()
{
    string s{"a man, a p Panama"};
    cout << boolalpha << isPalindrome(s) << endl;
}