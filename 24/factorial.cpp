#include <bits/stdc++.h>
using namespace std;

int facto(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int factorial(int n)
{
    // Base case
    if (n < 1)
        return 1;

    // Recursive case
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter N :";
    cin >> n;
    cout << "Factorial is : " << facto(n);
    cout << "\nFactorial is : " << factorial(n);
    return 0;
}