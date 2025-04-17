#include <iostream>
using namespace std;

int setBit(int n, int k)
{
    int mask = 1 << k;
    int ans = n | mask;
    return ans;
    // return n | (1 << k);
}

int main()
{
    int n, k;
    cout << "Enter number N followed by k :";
    cin >> n >> k;
    cout << "Number after setting the bit :" << setBit(n, k);
    return 0;
}