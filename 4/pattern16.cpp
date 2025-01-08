#include<iostream>
using namespace std;

int main(){
    int row{1};
    int n{1};
    cout<<"Enter the value of n: ";
    cin>>n;
    
    while (row <= n)
    {
       
            int start = n- row;
            while (start)
            {
               cout<<'*'<<" ";
               start = start -1;
            }
        cout<<endl;
        row= row +1;
    }
    //reverse pattern
    
    return 0;
}