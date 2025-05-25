#include <iostream>
#include <vector>
using namespace std;

int binary_search(int x, int y)
{
    int s = 0, e = abs(x), ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        // perfect solution
        if (abs(mid * y) == abs(x))
        {
            ans = mid;
            break;
        }
        // non perfect solution
        if (abs(mid * y) > abs(x))
        {
            // left
            e = mid - 1;
        }
        else
        {
            // store ans
            ans = mid;
            // right
            s = mid + 1;
        }
    }
    if ((x > 0 && y > 0) || (x < 0 && y < 0))
        return ans;
    else
        return -ans;
}

double afterDecimal(int x, int y, int precision, int temp_solution)
{
    double ans = temp_solution;
    double factor = 1;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * abs(y) <= abs(x); j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int x = 0, y = 0;
    cin >> x >> y;
    int temp = binary_search(x, y);
    cout << x << " / " << y << " = " << afterDecimal(x, y, 4, temp);
    return 0;
}