#include <iostream>
using namespace std;

bool evenOdd(int n)
{
    // return n % 2 == 0; //less prefered
    return (n & 1) == 0; // optimal and best
    // return ((n >> 1) << 1) == n; // optimal, but less prefered
}

int main()
{
    int n;
    cout << "Enter N :";
    cin >> n;
    cout << boolalpha << "Is Even :" << evenOdd(n);
}