#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         char ch = 'A' + col;
    //         cout << ch << " ";
    //     }
    //     for (int col = row; col > 0; col--)
    //     {
    //         char ch = 'A' + col - 1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    for(int i=0 ; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<static_cast<char>('A' + j )<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<static_cast<char>('A' + i - j - 1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}