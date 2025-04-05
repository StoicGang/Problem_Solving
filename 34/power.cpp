#include <bits/stdc++.h>
using namespace std;

int power(int a, int b, int ans)
{
    if (b < 1)
        return ans;
    ans = ans * a;
    power(a, b - 1, ans);
}

int powerO(int a, int b)
{
    if (a == 1 || b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    int ans = powerO(a, b / 2);
    if (b & 1)
    {
        return a * ans * ans;
    }
    else
    {
        return ans * ans;
    }
}

int main()
{
    int a = 3, b = 2, ans = 1;
    cout << "Enter a and b ";
    cin >> a >> b;
    cout << "a to the power b is :" << powerO(a, b);
}