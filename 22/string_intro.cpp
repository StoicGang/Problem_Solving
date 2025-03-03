#include <bits/stdc++.h>

using namespace std;

void reverseString(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        /*
        swap(name[s], name[e]);
        s++;
        e--;
        */
        swap(name[s++], name[e--]);
    }
}

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;
    cout << "Your name is " << name << endl;
    int length = getlength(name);
    cout << "Length is : " << length << endl;
    reverseString(name, length);
    cout << "Reverse name is : " << name;
    string s = "rals";
    s.pop_back();
    return 0;
}