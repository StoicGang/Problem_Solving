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

// find missing elements from an array with duplicates
void findmissing(vector<int> &a)
{
    // approaches ==> marking
    int i = 0;
    while (i < a.size())
    {
        int index = abs(a[i]) - 1;
        if (index < a.size() && a[index] > 0)
        {
            a[index] *= -1;
        }
        i++;
    }
    for (int j = 0; j < a.size(); j++)
    {
        if (a[j] > 0)
        {
            cout << j + 1 << " ";
        }
    }

    // sorting and swapping
    // int i = 0;
    // while (i < a.size())
    // {
    //     int index = a[i] - 1;
    //     if (a[i] != a[index])
    //     {
    //         swap(a[i], a[index]);
    //     }
    //     i++;
    // }
    // for (int j = 0; j < a.size(); j++)
    // {
    //     if (a[j] != j + 1)
    //     {
    //         cout << j + 1 << " ";
    //     }
    // }
}

int main()
{
    int num;
    cin >> num;
    vector<int> a(num);
    input(a);
    // cout << findMiss(a, num);
    findmissing(a);
}