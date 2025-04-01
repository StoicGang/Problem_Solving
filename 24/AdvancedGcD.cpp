#include <bits/stdc++.h>

using namespace std;

int getAdvancedGcd(int n, string b)
{
    int mod = 0;
    for (char digit : b)
    {
        mod = (mod * 10 + (digit - '0')) % n;
    }
    return __gcd(mod, n);
}

int main()
{
    int n = 5;
    string b = "55555555555555555555555555555";
    cout << "Advanced Gcd : " << getAdvancedGcd(n, b);
    return 0;
}