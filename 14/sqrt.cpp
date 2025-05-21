#include <iostream>
using namespace std;

long long int sqrtInteger(int n)
{
    long long int start = 0, end = n, ans = -1;
    long long int mid = start + (end - start) / 2;
    while (start <= end)
    {
        long long int square = mid * mid;
        long long int mid = start + (end - start) / 2;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

double afterDecimal(int n, int precision, int temp_solution)
{
    double ans = temp_solution;
    double factor = 1;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j <= n; j = j + factor) // this will generate the precision upto 6 digits
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;
    int temp_solution = sqrtInteger(n);
    int precision = 0;
    cin >> precision;
    cout << "The square root is : " << afterDecimal(n, precision, temp_solution);

    return 0;
}