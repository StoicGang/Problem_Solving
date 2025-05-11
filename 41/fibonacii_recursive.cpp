#include <bits/stdc++.h>
using namespace std;

long long findFibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    long long ans = findFibo(n - 1) + findFibo(n - 2);
    return ans;
}

vector<int> generateFibonacciNumbers(int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        temp.push_back(findFibo(i));
    }
    return temp;
}

int main()
{
    int n;
    cin >> n;
    vector<int> temp = generateFibonacciNumbers(n);
    for (int nums : temp)
    {
        cout << nums << " ";
    }
    return 0;
}