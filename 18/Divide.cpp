#include <iostream>
using namespace std;

int Divide(int m, int n)
{
    int sum = m;
    int count = 1;
    while (sum >= 0)
    {
        int diff = sum - n;
        if (diff >= n)
        {
            sum -= n;
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

int Divide2(int m, int n)
{
    int sum = m;
    int count = 1;
    int diff = sum - n;
    while (diff >= n)
    {
        sum -= n;
        count++;
        diff = sum - n;
    }
    return count;
}

int main()
{
    int dividend{18};
    cin >> dividend;
    int divisor{3};
    cin >> divisor;
    cout << Divide(dividend, divisor) << endl;
    cout << Divide2(dividend, divisor) << endl;
}