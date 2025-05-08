#include <iostream>
using namespace std;

bool isPrime(long num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int solve(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (isPrime(arr[i] * arr[j] * arr[k]))
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int num;
    cin >> num;
    while (num != 0)
    {
        int size = 0;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << solve(arr, size) << endl;
        num--;
    }
}