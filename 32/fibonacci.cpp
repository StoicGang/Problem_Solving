#include <bits/stdc++.h>
using namespace std;

long long fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    long long ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
}

int main()
{
    int n = 0;
    cin >> n;
    while (n != 0)
    {
        int num;
        cin >> num;
        cout << num << "th fibonacci no is:" << fibonacci(num) << endl;
        n--;
    }
    return 0;
}