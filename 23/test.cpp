#include <bits/stdc++.h>

using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int N, int M)
{
    int top = 0, bottom = N - 1, left = 0, right = M - 1;

    while (top < bottom && left < right)
    {
        int prev = mat[top + 1][left]; // Store first element to be moved

        // Move elements from left to top
        for (int i = left; i <= right; i++)
            swap(mat[top][i], prev);

        // Move elements from top to right
        for (int i = top + 1; i <= bottom; i++)
            swap(mat[i][right], prev);

        // Move elements from right to bottom
        for (int i = right - 1; i >= left; i--)
            swap(mat[bottom][i], prev);

        // Move elements from bottom to left
        for (int i = bottom - 1; i > top; i--)
            swap(mat[i][left], prev);

        top++;
        bottom--;
        left++;
        right--;
    }
}

void print(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << "Your array is: " << endl;
    print(matrix);

    cout << "Rotated array is: " << endl;
    rotateMatrix(matrix, 3, 3);
    print(matrix);
    return 0;
}