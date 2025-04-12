#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = 0;
    int position = 0;
    // while (n != 0)
    // {
    //     int digit = n % 10;
    //     if (digit == 1)
    //     {
    //         result = result + pow(2, position);
    //     }
    //     n = n / 10;
    //     position++;
    // }
    // bitwise opeartion
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            result |= (1 << position);
        }
        n = n / 10;
        position++;
    }
    cout << result;
    return 0;
}