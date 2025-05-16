#include <bits/stdc++.h>
using namespace std;

vector<int> rowWaveForm(vector<vector<int>> &mat)
{
    vector<int> temp;
    int n = mat.size();
    int m = mat[0].size();
    int row = 0;
    while (row < n)
    {
        if (!(row & 1))
        {
            for (int col = 0; col < m; col++)
            {
                temp.push_back(mat[row][col]);
            }
        }
        else
        {
            for (int col = m - 1; col >= 0; col--)
            {
                temp.push_back(mat[row][col]);
            }
        }
        row++;
    }
    return temp;
}

void printMat(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void printVec(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printMat(mat);
    vector<int> result = rowWaveForm(mat);
    printVec(result);
    return 0;
}