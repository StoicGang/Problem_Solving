#include <iostream>
using namespace std;

void printCounting(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    printCounting(n);
    return 0;
}