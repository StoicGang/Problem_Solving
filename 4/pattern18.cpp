#include <iostream>
using namespace std;

int main(){
    int col{1};
    int row{1};
    int n{0};
    cout<<"Enter the value of n: ";
    cin>>n;

    while (row<=n)
    {
        //1st triangle
        int space = n-row;
        while (space>0)
        {
           cout<<" ";
           space--;
        }

        //2nd triangle
        int count{1};
        while (col<=row)
        {
            
            cout<<count<<" " ;
            count++;
            col++;
        }
        
        
        cout<<endl;
        row++;
    }
    

}