#include <bits/stdc++.h>

using namespace std;

int power(int n)
{
    if (n == 0)
        return 1;
    // int choti_problem = power(n - 1);
    // int badi_problem = 2 * (choti_problem);
    // return badi_problem;

    return 2 * power(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << power(n);
    return 0;
}