#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
}

int findMiss(vector<int> &a, int num)
{
    int totalsum = num * (num + 1) / 2;
    int sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
    }
    return totalsum - sum;
}

int main()
{
    int num;
    cin >> num;
    vector<int> a(num - 1);
    input(a);
    cout << findMiss(a, num);
}