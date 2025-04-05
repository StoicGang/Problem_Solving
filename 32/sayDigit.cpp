#include <bits/stdc++.h>

using namespace std;

void sayDigit(int n, string arr[])
{
    // base case
    if (n == 0)
        return;

    // processing
    int digit = n % 10;
    n = n / 10;

    // head recursion
    sayDigit(n, arr);

    // processing
    cout << arr[digit] << " ";
}

int main()
{
    int n;
    string arr[10] = {"Zero", "One", "Two", "Three",
                      "Four", "Five", "Six", "Seven",
                      "Eight", "Nine"};
    cin >> n;
    sayDigit(n, arr);
    return 0;
}