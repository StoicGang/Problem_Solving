#include <bits/stdc++.h>
using namespace std;

vector<int> countEvenOdd(vector<int> arr, int n)
{
    vector<int> count(2, 0); // Initialize with 2 zeros: [0,0]

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            count[0]++; // Count even numbers
        else
            count[1]++; // Count odd numbers
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid array size" << endl;
        return 1;
    }
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> result = countEvenOdd(arr, n);
    cout << result[0] << " " << result[1] << endl;
}