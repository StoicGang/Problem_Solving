#include <iostream>
using namespace std;

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
    int num;
    cin >> num; // Reading input from STDIN
    cout << factorial(num);
}