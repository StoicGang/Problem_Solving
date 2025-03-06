#include <bits/stdc++.h>

using namespace std;

void rotate90(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    // Step 1: Transpose the matrix (swap rows with columns)
    for (int i = 0; i < m; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row (after transposition)
    for (int i = 0; i < n; ++i)
    {
        int start = 0, end = matrix[i].size() - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
}

void rotateChoice(vector<vector<int>> &matrix, int angle)
{
    // Determine the number of rows and columns
    int m = matrix.size();
    int n = matrix[0].size();

    // Perform the rotation based on the angle
    switch (angle % 360)
    {
    case 0:
        // No rotation
        break;
    case 90:
        rotate90(matrix);
        break;
    case 180:
        rotate90(matrix);
        rotate90(matrix); // Rotate 90 twice
        break;
    case 270:
        rotate90(matrix);
        rotate90(matrix);
        rotate90(matrix); // Rotate 90 three times
        break;
    case 360:
        // No rotation (360° is the same as 0°)
        break;
    default:
        cout << "Invalid angle!" << endl;
    }
}

int print(vector<vector<int>> &matrix)
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

    int angle;
    cout << "Enter the angle of rotation (0, 90, 180, 270, or 360): ";
    cin >> angle;
    cout << "Rotated Array is: " << endl;
    rotateChoice(matrix, angle);
    print(matrix);
    return 0;
}