#include <bits/stdc++.h>

using namespace std;

void reverse_counting(int n)
{ // tail recursion
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    reverse_counting(n - 1);
}

void counting(int n)
{ // head recursion
    if (n == 0)
    {
        return;
    }
    counting(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    int start = 1;
    cin >> n;
    counting(n);
    cout << endl;
    reverse_counting(n);
    return 0;
}