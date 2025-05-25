#include <iostream>
#include <string>
using namespace std;

int isPossible(int x, int y)
{
    if (x > y)
        return 0;
    if (x == y)
        return 1;
    if (x & 1)
    {
        x += 1; // Make x even
    }
    else
    {
        x += 2; // x is already even, step to next even
    }

    return (x <= y && (y - x) % 2 == 0) ? 1 : 0;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << isPossible(x, y);
    return 0;
}