#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    unsigned int bitmask{0};
    int temp = num;
    if (num == 0)
    {
        return 0;
    }
    while (temp != 0)
    {
        bitmask = (bitmask << 1) | 1;
        temp >>= 1;
    }
    int complement = num ^ bitmask;
    cout << complement;
    return 0;
}
