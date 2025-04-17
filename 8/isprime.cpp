#include <iostream>
using namespace std;

// approach 1
bool isPrime(int n)
{
    for (int i{2}; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
// approach 2
bool isPrimeO(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true; // Special case for 2 (smallest prime)
    if ((n & 1) == 0)
        return false; // Skip even numbers

    // Check only odd numbers up to sqrt(n)
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n{0};
    cin >> n;
    if (isPrimeO(n))
    {
        cout << n << " is prime" << endl;
    }
    else
        cout << n << " is  not prime" << endl;
    return 0;
}