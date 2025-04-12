#include <iostream>
#include <limits.h>

using namespace std;

int reverse(int x)
{
    int result = 0;
    while (x != 0)
    {
        int digit = x % 10;
        x /= 10;

        if (result > (INT_MAX / 10) || (result == INT_MAX / 10 && digit > 7))
        {
            return 0;
        }
        if (result < (INT_MIN / 10) || (result == INT_MIN / 10 && digit < -8))
        {
            return 0;
        }

        result = result * 10 + digit;
    }
    cout << result;
    return result;
}

int reverseS(int x)
{
    string a = to_string(x);
    int start = 0;
    int end = a.length() - 1;

    // if '-' sign present
    if (a[start] == '-')
    {
        start++;
    }

    while (start < end)
    {
        swap(a[start++], a[end--]);
    }

    long long temp = stoll(a);

    if (temp < INT_MIN || temp > INT_MAX)
    {
        return 0;
    }
    return (int)temp;
}

int main()
{
    int n{0};
    cin >> n;
    reverse(n);
    cout << "\nReversed Integer : " << reverseS(n);
    return 0;
}