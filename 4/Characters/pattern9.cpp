#include<iostream>
using namespace std;

int main(){
    int row{1};
    int n{1};
    char start {'A'};
    cout<<"Enter the value of n: ";
    cin>>n;

    // while (row<=n)
    // {
    //     int col{1};
    //     while (col<=n)
    //     {
    //         char ch = 'A' + col -1;
    //         cout<<ch <<" ";
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row= row +1;
    // }
  
// Reverse pattern 
    // while (row<= n)
    // {
    //     int col{1};
    //     while (col <=n)
    //     {
    //         char ch = 'A' +n - col ;
    //         cout<<ch<<" ";
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row = row +1;
        
    // }
    

// Test 
    // while (row<=n)
    // {
    //     int col{1};
    //     while (col<=n)
    //     {
    //         cout<<start <<" ";
    //         start = start +1;
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row= row +1;
    // }

//Test reverse pattern 

    char end= ('A'+ (n*n) -1) ;
    while (row <= n)
    {
        int col{1};
        while (col <=n)
        {
            cout<<end<<" ";
            end = end -1;
            col++;
        }
        cout<<endl;
        row++;
    }
    

    return 0;
}