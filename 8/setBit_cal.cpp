// Write the code find the number of setbits in given two numbers

#include <iostream>
using namespace std;

int cal_setBit(int a, int b)
{
    int count{0};

    // while (a)
    // {
    //     count += a&1;
    //     a >>= 1;
    // }
    // while (b)
    // {
    //     count += b&1;
    //     b >>=1;
    // }

    // optimized code which is more readable
    while (a, b)
    {
        count += a & 1;
        a >>= 1;
        count += b & 1;
        b >>= 1;
    }

    return count;
}

int main()
{
    int a;
    int b;
    cout << "Enter the values of a, b : ";
    cin >> a >> b;
    int result = cal_setBit(a, b);
    cout << "No of setbits(1) in the numbers is : " << result << endl;
    return 0;
}