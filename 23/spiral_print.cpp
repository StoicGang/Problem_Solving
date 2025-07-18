#include <bits/stdc++.h>

using namespace std;

void spiral_print(int arr[][3], int row, int col)
{
    int starting_row = 0, starting_col = 0;
    int ending_row = row - 1, ending_col = col - 1;
    int count = 0;
    int Total_count = row * col;

    while (count < Total_count)
    {
        // Print the starting row
        for (int i = starting_col; i <= ending_col && count < Total_count; i++)
        {
            cout << arr[starting_row][i] << " ";
            count++;
        }
        starting_row++;

        // Print the ending column
        for (int i = starting_row; i <= ending_row && count < Total_count; i++)
        {
            cout << arr[i][ending_col] << " ";
            count++;
        }
        ending_col--;

        // Print the ending row (if there are rows remaining)
        if (starting_row <= ending_row)
        {
            for (int i = ending_col; i >= starting_col && count < Total_count; i--)
            {
                cout << arr[ending_row][i] << " ";
                count++;
            }
            ending_row--;
        }

        // Print the starting column (if there are columns remaining)
        if (starting_col <= ending_col)
        {
            for (int i = ending_row; i >= starting_row && count < Total_count; i--)
            {
                cout << arr[i][starting_col] << " ";
                count++;
            }
            starting_col++;
        }
    }
}

void print(int arr[][3], int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

vector<int> spiralMatrix(vector<vector<int>> &MATRIX)
{
    int m = MATRIX.size() - 1;    // row
    int n = MATRIX[0].size() - 1; // col
    int row = 0;
    int col = 0;
    vector<int> temp;
    while (row <= m && col <= n)
    {
        // first line
        for (int i = col; i <= n; i++)
        {
            temp.push_back(MATRIX[row][i]);
        }
        row++;
        // last col
        for (int i = row; i <= m; i++)
        {
            temp.push_back(MATRIX[i][n]);
        }
        n--;
        // last row
        if (row <= m)
        {
            for (int i = n; i >= col; i--)
            {
                temp.push_back(MATRIX[m][i]);
            }
            m--;
        }
        // first col
        if (col <= n)
        {
            for (int i = m; i >= row; i--)
            {
                temp.push_back(MATRIX[i][col]);
            }
            col++;
        }
    }
    return temp;
}

int main()
{
    // int arr[3][3]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    // cout << "Array is : " << endl;
    // print(arr, 3, 3);
    // cout << "Spiral print is : " << endl;
    // spiral_print(arr, 3, 3);
    vector<vector<int>> matrix = {{1, 2, 3, 0}, {4, 5, 6, 10}, {7, 8, 9, 11}};
    vector<int> result = spiralMatrix(matrix);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}