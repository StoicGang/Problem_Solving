#include<iostream>
using namespace std;

int main(){
    int n;
    int row{1};
    
    cout<<"enter the value of n: ";
    cin>>n;
//Normal sequence of printing

    while (row<=n)
    {
        int col{1};

        while (col<=row)
        {
            cout<<row<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }


//Reversal sequence printing
/*
    while (i<=n)
    {
        int j{1};

        while (j<=n)
        {
            cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
*/
    return 0;
}