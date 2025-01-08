#include<iostream>
using namespace std;

int main(){
    int n;
    int row{1};
    
    cout<<"enter the value of n: ";
    cin>>n;
//Normal Printing
    // while (i<=n)
    // {
    //     int j{1};

    //     while (j<=i)
    //     {
    //         cout<<"*"<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }
    
//reverse printing
    while (row<=n)
    {
        int j{1};

        int start =n -row+1;
        while (start)
        {
            cout<<"*"<<" ";
            start = start -1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}