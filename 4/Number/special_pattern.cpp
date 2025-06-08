#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> printPattern(int N)
{
    if (N <= 0)
    {
        return vector<vector<int>>();
    }

    vector<vector<int>> result;

    int leftNum = 1;          // Starting number for the left side
    int rightNum = N * N + 1; // Starting number for the right side

    for (int i = 0; i < N; i++)
    {
        vector<int> row;
        int leftCount = N - i; // Count for left side numbers

        // Left side numbers
        for (int j = 0; j < leftCount; j++)
        {
            row.push_back(leftNum++);
        }

        // Right side numbers
        int rightCount = N - i;
        for (int j = 0; j < rightCount; j++)
        {
            row.push_back(rightNum++);
        }

        result.push_back(row);
        rightNum -= (2 * rightCount - 1); // Adjust right side number for the next row
    }

    return result;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> pattern = printPattern(n);

    // Print the final pattern
    for (const auto &row : pattern)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
