#include<iostream>
using namespace std;

int main(){
    
    int n{1};
    char value = 'A';

    cout<<"Enter the value of n: ";
    cin>>n;

    //int row{1};
    // while (row<=n)
    // {
    //     int col{1};
    //     while (col<=row)
    //     {
    //         cout<<value<<" ";
    //         value =value +1;
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row= row +1;
    // }

    //reverse pattern
    char end = 'A' + (n * (n + 1)) / 2 - 1; 

    int row = n;
    while (row >= 1) {
        int col = 1;
        char current = end; 

        while (col <= row) {
            cout << current << " "; 
            current--; 
            col++;
        }

        end = current; 
        cout << endl; 
        row--;
    }
    
    return 0;
}