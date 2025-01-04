#include<iostream>
using namespace std;

int main(){
    //'*' printing num(col)=num(row)
    int i{1};
    int n;
    cout<<"enter the number : ";
    cin>>n;

    while (i<=n)
    {
       int j=1;
       while (j<=n)
       {
        cout<<i;
        j = j+1;
       }
       cout<<endl;
       i=i+1;
    }
    
    return 0;
}