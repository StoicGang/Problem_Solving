#include <bits/stdc++.h>

using namespace std;

int main()
{

    int i = 0;
    int &j = i; // reference variable
    cout << i << " " << j << endl;
    i++;
    cout << i << " " << j << endl;
    j++;
    cout << i << " " << j << endl;

    return 0;
}