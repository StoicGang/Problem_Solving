#include <bits/stdc++.h>

using namespace std;

int update1(int &n)
{
    // by ref
    n++;
}
int update2(int n)
{
    // by value
    n++;
}

int main()
{
    int n = 0;
    cout << "Before :" << n << endl;
    update2(n);
    cout << "After :" << n << endl;
    return 0;
}