#include<iostream>
using namespace std;

int main(){
    int row{1};
    int n{1};
    cout<<"Enter the value of n: ";
    cin>>n;

    while (row<=n)
    {
        int col{1};
        int value{row};
        while (col<=row)
        {
            cout<<value<<" ";
            value= value+1;
            col = col +1;
        }
        cout<<endl;
        row= row +1;
    }


// Test 1 (try to solve without using the value variable)
/*
    while (row<=n)
    {
        int col{1};
        while (col<=row)
        {
            cout<<row+col-1<<" ";
            col =col +1;
        }
        cout<<endl;
        row= row +1;
    }
*/    

//Reverse pattern
/*
    while (row<=n)
    {
        int col{1};
        while (col<=row)
        {
            cout<<n-col+1<<" ";
            col = col +1;
        }
        cout<<endl;
        row= row +1;
    }
*/    
    return 0;
}