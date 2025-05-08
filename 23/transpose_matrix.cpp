#include <bits/stdc++.h>
using namespace std;

void print(int rows, int cols, int arr[][3])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int arr[][3], int rows, int cols, int transpose_arr[][3])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // swap(arr[i][j], arr[j][i]); // give same array (transposing twice)
            transpose_arr[j][i] = arr[i][j];
        }
    }
}

int main()
{
    // const int rows = 3;
    // const int cols = 3;
    // int arr[rows][cols] = {{91, 92, 83}, {14, 50, 36}, {73, 58, 69}};
    // print(rows, cols, arr);
    // int transpose_arr[3][3];
    // transpose(arr, 3, 3, transpose_arr);
    // cout << "Transpose is : \n";
    //  print(rows, cols, transpose_arr);

    // 2d array with initialization
    vector<vector<int>> array(5, vector<int>(5, -8));
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array.size(); j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}