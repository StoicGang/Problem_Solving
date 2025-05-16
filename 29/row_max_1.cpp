#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int row = 0;
    int max1Count = 0;
    for (int i = 0; i < n; i++)
    {
        int row1Count = 0;
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 1)
            {
                row1Count++;
            }
        }
        if (row1Count > max1Count)
        {
            row = i;
            max1Count = row1Count;
        }
    }
    return row;
}

int main()
{
    vector<vector<int>> matrix = {{0, 1, 1}, {0, 0, 1}, {0, 1, 1}, {1, 0, 1}};
    cout << rowWithMax1s(matrix, 3, 3);
}