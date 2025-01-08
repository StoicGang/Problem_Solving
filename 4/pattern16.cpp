#include<iostream>
using namespace std;

int main(){
    
    int n{1};
    cout<<"Enter the value of n: ";
    cin>>n;
    
    // int row{1};
    // while (row<=n)
    // {
    //     //print space
    //     int space = n-row;
    //     while (space)
    //     {
    //         cout<<" ";
    //         space = space -1;
    //     }
        
    //     //print 1st triangle
    //     int col =1;
    //     while (col <= row)
    //     {
    //         cout<<col;
    //         col = col +1;
    //     }

    //     //print 2nd triangle
    //     int start = row -1;
    //     while (start){
    //         cout<<start;
    //         start= start -1;
    //     }

    //     cout<<endl;
    //     row = row +1;
    // }

    //reverse pattern

    int row = n;  

    while (row >= 1)  
    {
        // Print space
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // Print 1st triangle
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col = col + 1;
        }

        // Print 2nd triangle
        int start = row - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }

        cout << endl;
        row = row - 1;  
    }
    
    
    return 0;
}