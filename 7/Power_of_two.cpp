#include <iostream>
#include <math.h>

using namespace std;

bool isPowerOfTwo(int n)
{

    int result{};
    for (int i = 0; i < 31; i++)
    {

        result = pow(2, i);
        if (result == n)
        {
            cout << "true";
            return true;
        }
    }
    cout << "false";
    return false;
}

int main()
{
    // Bruteforce approach
    int n{0};
    cin >> n;
    isPowerOfTwo(n);

    return 0;
}