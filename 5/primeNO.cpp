#include <iostream>
using namespace std;

int main()
{
    int n{0};
    cout << "Enter the value of n : ";
    cin >> n;
    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << n << " Not a Prime Number " << endl;
    }
    else
    {
        cout << n << " is a Prime Number" << endl;
    }

    return 0;
}