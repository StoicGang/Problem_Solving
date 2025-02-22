#include <iostream>
using namespace std;

int main()
{
    int row{0};
    int col{0};
    int n;
    cin >> n;
    while (row <= n)
    {
        while (col <= n)
        {
            if (row == col)
            {
                cout << "*" << " ";
            }
            col++;
        }
        row++;
    }
    return 0;
}