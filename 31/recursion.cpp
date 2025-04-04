#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    // int choti_problem = factorial(n - 1);
    // int badi_problem = choti_problem * n;
    // return badi_problem;
    return n * (factorial(n - 1));
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}