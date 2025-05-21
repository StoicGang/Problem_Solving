#include <iostream>
using namespace std;

int main()
{
    int a{1};
    int b{1};
    cin >> a >> b;
    // Bitwise Operator
    cout << "a : " << (a) << "\nb : " << (b) << endl;
    cout << "~a : " << (~a) << "\n~b : " << (~b) << endl;
    cout << "a&b : " << (a & b) << endl;
    cout << "a|b : " << (a | b) << endl;
    cout << "a^b : " << (a ^ b) << endl;

    // Right shift
    cout << (a >> 2) << endl;
    cout << (b >> 2) << endl;

    // Left Shift
    cout << (a << 2) << endl;
    cout << (b << 2) << endl;

    return 0;
}