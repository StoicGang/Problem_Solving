// Initialize array with random number.
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); // Seed for randomness
    int n = 10;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        arr[i] = rand() % 100; // Random int between 0 and 99
    }

    for (int val : arr)
    {
        cout << val << " ";
    }
    return 0;
}
