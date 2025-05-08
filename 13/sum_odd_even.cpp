#include <iostream>
using namespace std;

void addOddEven(int n)
{
    int Oddsum = 0, Evensum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit % 2 == 0)
        {
            Evensum += digit;
        }
        else
        {
            Oddsum += digit;
        }
        n /= 10;
    }
    cout << Evensum << " " << Oddsum;
}

int main()
{
    int n;
    cin >> n;
    addOddEven(n);
    return 0;
}
