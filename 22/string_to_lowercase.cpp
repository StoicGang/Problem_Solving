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

string toLowercase(char string[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] == string[i];
        }
        else
        {
            char temp = string[i] - 'A' + 'a';
            string[i] == temp;
        }
    }
    return string;
}

int main()
{
    char string[20];
    int len = getlength(string);
    cout << "Enter your string : ";
    cin >> string;
    cout << "your string is : " << string << endl;

    cout << "Lowercase string is : " << toLowercase(string, len);

    return 0;
}