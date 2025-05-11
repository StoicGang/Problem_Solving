#include <bits/stdc++.h>

using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int N, int M)
{
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
// find element of array using linear search
bool find_in_2d(vector<vector<int>> &matrix, int n)
{
    int row = matrix.size();
    int col = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (n == matrix[i][j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << "Your array is: " << endl;
    print(matrix);

    // cout << "Rotated array is: " << endl;
    // rotateMatrix(matrix, 3, 3);
    // print(matrix);
    int n = 0;
    cout << "Enter the  element to search : ";
    cin >> n;
    int result = find_in_2d(matrix, n);
    cout << n << " is present : " << boolalpha << result << endl;
    return 0;
}