#include<iostream>
using namespace std;

int main(){
   
    int n{1};
    
    cout<<"Enter the value of n: ";
    cin>>n;

    // int row{1};
    // while (row<=n)
    // {
    //     int col{1};
    //    // print  1st triangle
    //     while (col <= n-row+1)
    //     {
    //         cout<<col<<" ";
    //         col = col +1;
    //     }

    //     //print 2nd triangle
    //     int val = 1;
    //     int stars = 2 * (row -1);
    //     while (val<=stars)
    //     {
    //         cout<<"* ";
    //         val= val+1;
    //     }
        
    //     //print 3rd triangle
    //    int value= n -row+1;

    //    while (value>0)
    //    {
    //     cout<<value<<" ";
    //     value--;
    //    }

    //     cout<<endl;
    //     row= row +1;
    // }


//reverse pattern

    int row = n;  

    while (row >= 1)  
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col << " ";
            col = col + 1;
        }

        int stars = 2 * (row - 1); 
        int val = 1;
        while (val <= stars)
        {
            cout << "* ";
            val = val + 1;
        }

        // Print 3rd triangle
        int value = n - row + 1;
        while (value > 0)
        {
            cout << value << " ";
            value--;
        }

        cout << endl;
        row = row - 1;  
    }
    
    return 0;
}