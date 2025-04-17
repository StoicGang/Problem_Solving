#include <iostream>
using namespace std;

int factorial() {};
int combination() {};

int factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int combination(int n, int r)
{
    int numerator{0};
    int denominator{0};

    numerator = factorial(n);
    denominator = factorial(r) * factorial(n - r);
    int nCr = numerator / denominator;
    return nCr;
}

int main()
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    int answer = combination(n, r);
    cout << "Answer is : " << answer;
    return 0;
}