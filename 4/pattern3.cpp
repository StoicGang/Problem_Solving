#include<iostream>
using namespace std;

int main(){
    int n;
    int i{1};
    
    cout<<"enter the value of n: ";
    cin>>n;
/*
    while (i<=n)
    {
        int j{1};

        while (j<=i)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
*/    
//reverse printing
    while (i<=n)
    {
        int j{1};

        while (j<=i)
        {
            cout<<"*"<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}