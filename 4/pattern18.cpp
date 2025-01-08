#include<iostream>
using namespace std;

int main(){
    int row{1};
    int n{1};
    int col{1};
    cout<<"Enter the value of n: ";
    cin>>n;

/*
    while (row<=n)
    {
        //print  1st triangle
        while (col <= row)
        {
            cout<< col <<" ";
            col = col +1;
        }
        
        //print 2nd triangle
       int start = (n -row)*2;
       while (start > 0)
       {
        cout<<"* ";
        start = start -1;
       }
       

        //print 3rd triangle
        int start2 =row;
        while (start2 >0)
        {
            cout<<start2<<" ";
            start2 = start2 -1;
        }

        cout<<endl;
        row= row +1;
    }
*/
//reverse pattern
    while (row <=n)
    {
        //print 1st triangle
        while (col <= row ) {
            cout << col << " ";
            col = col +1;
        }

        //print the stars
        int stars = (row - 1) * 2;
        while (stars > 0) {
            cout << "* ";
            stars= stars -1;
        }

        // Print 2nd triangle
        int dec = n - row + 1;
        while (dec > 0) {
            cout << dec << " ";
            dec = dec -1;
        }   
        cout<<endl;
        row= row +1; 
    }
    return 0;
}