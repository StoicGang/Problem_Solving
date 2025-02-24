#include <bits/stdc++.h>

using namespace std;

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

char tolowercase(char ch)
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

bool checkString(char string[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        /*
        if (string[s] == string[e])
        {
            return true;
        }
        s++;
        e--;
        */
        // Following line checks whether string is palindrome or not irrespective of their cases
        if (tolowercase(string[s++]) == tolowercase(string[e--]))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char string[20];
    cout << "Enter your string " << endl;
    cin >> string;
    int len = getlength(string);
    cout << "Whether palindrom : " << checkString(string, len);
}