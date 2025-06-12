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
    //     while (col<=n)
    //     {
    //         char ch = ('A' + col + row -2);
    //         cout<<ch<<" ";
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row= row +1;
    // }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<static_cast<char>('A' + j + i)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}