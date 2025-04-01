#include <bits/stdc++.h>

using namespace std;

vector<int> SegmentedSieve(int n)
{
    vector<bool> prime(n + 1, true);
    vector<int> tmp;
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            tmp.push_back(i);
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    return tmp;
}

void printVec(vector<int> tmp)
{
    for (int i = 0; i < tmp.size(); i++)
    {
        cout << tmp[i] << " ";
    }
    cout << endl;
}

int main()
{
    int number = 50;
    printVec(SegmentedSieve(number));
    return 0;
}