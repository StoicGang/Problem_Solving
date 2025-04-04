#include<iostream>
using namespace std;

int main(){
    int row{1};
    int n{1};
    cout<<"Enter the value of n: ";
    cin>>n;
    
    // while (row<=n)
    // {
    //     int col{1};
    //     while (col<=row)
    //     {
    //         char ch = ('A' +row -1);
    //         cout<<ch<<" ";
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row= row +1;
    // }

//Reverse pattern

    while (row<=n)
    {
        int col{1};
        while (col<=row)
        {
            char ch = ('A' + n - row );
            cout<<ch<<" ";
            col = col +1;
        }
        cout<<endl;
        row= row +1;
    }

    return 0;
}