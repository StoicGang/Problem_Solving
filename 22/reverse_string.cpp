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

void reverseString(char string[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(string[s++], string[e--]);
    }
}

int main()
{
    char string[20];
    cout << "Enter your string " << endl;
    cin >> string;
    int len = getlength(string);
    reverseString(string, len);
    cout << "Reversed String is " << string << endl;
}