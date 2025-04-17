#include <iostream>
using namespace std;

void printPrime(int n)
{
    if (n < 2)
    {
        cout << "No prime numbers available.\n";
        return;
    }

    cout << "Prime numbers are: ";
    for (int i = 2; i < n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    printPrime(n);
    return 0;
}