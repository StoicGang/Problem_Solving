#include <bits/stdc++.h>

using namespace std;

void input2DArray(int arr[][3], int rows, int cols)
{
    cout << "Enter 1 for row-wise input, 2 for column-wise input: ";
    int choice;
    cin >> choice;

    if (choice == 1)
    {
        // Row wise input
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    else
    {
        // Column wise input
        for (int j = 0; j < cols; j++)
        {
            for (int i = 0; i < rows; i++)
            {
                cin >> arr[i][j];
            }
        }
    }
}

void print2DArray(int arr[][3], int rows, int cols)
{
    cout << "\nRow-wise output:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nColumn-wise output:\n";
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3]; // For user input
    int arr1[3][3]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[3][3]{{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};

    print2DArray(arr1, 3, 3);
    print2DArray(arr2, 3, 3);

    input2DArray(arr, 3, 3);
    print2DArray(arr, 3, 3);

    return 0;
}
