#include <iostream>
using namespace std;

long long int sqrtInteger(int n)
{
    long long int start = 0, end = n, ans = -1;
    long long int mid = start + (end - start) / 2;
    while (start <= end)
    {
        long long int square = mid * mid;
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
        mid = start + (end - start) / 2;
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
        for (double j = ans; j * j <= n; j = j + factor)
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
    cout << "The square root is : " << afterDecimal(n, 3, temp_solution);

    return 0;
}