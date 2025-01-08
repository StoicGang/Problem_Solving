#include<iostream>
using namespace std;

int main(){
    int row{1};
    int n{1};
    cout<<"Enter the value of n: ";
    cin>>n;
    
    // while (row <=n)
    // {
    //     int space = n -row;
    //     while (space)
    //     {
    //         cout<<" ";
    //         space = space -1;
    //     }
    //     int col{1};
    //     while (col <= row)
    //     {
    //         cout<<"*" <<" ";
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row = row +1;
    // }
    
    //reverse pattern
    while (row <= n)
    {
       
            int start = n- row+1;
            while (start)
            {
               cout<<'*'<<" ";
               start = start -1;
            }
        cout<<endl;
        row= row +1;
    }
    
    return 0;
}