#include <bits/stdc++.h>

using namespace std;

// void input(int arr[3][3], int row, int col)
// {
//     int i = 0;
//     while (i <= row)
//     {
//         int j = 0;
//         while (j <= col)
//         {
//             cin >> arr[i][j];
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// void print2DArr(int arr[3][3], int row, int col)
// {
//     int i = 0;
//     while (i <= row)
//     {
//         int j = 0;
//         while (j <= col)
//         {
//             cout << arr[i][j] << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

int main()
{
    int arr[3][3];

    // Row wise initialisation
    int arr1[3][3]{1, 2, 3, 4, 5, 6, 7, 8, 9};

    // enitire row wise initialisation
    int arr2[3][3]{{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};

    // Taking input row wise
    /*for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }*/
    // Taking input col wise
    for (int j = 0; j < 3; j++) // here 3 is no of col
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i][j];
        }
    }
    // printing output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}