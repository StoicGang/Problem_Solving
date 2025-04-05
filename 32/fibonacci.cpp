#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
}

int main()
{
    int n = 0;
    cin >> n;
    cout << n << "th fibonacci no is:" << fibonacci(n) << endl;
}