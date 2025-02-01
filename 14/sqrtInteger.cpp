#include <iostream>
using namespace std;

long long int binary_search(int number)
{
    long long int start = 0, end = number, ans = -1;
    long long int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int square = mid * mid;
        if ((square) == number)
        {
            return mid;
        }
        else if ((square) < number)
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

int sqrt_x(int number)
{
    return binary_search(number);
}

int main()
{
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    cout << "Square root of " << n << " is " << sqrt_x(n);
    return 0;
}