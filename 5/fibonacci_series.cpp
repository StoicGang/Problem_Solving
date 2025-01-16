#include<iostream>
using namespace std;

int main (){
    int n{0};
    cout<<"Enter the number upto which you want to print the fibonacci series : ";
    cin>>n;
    int a{0};
    int b{1};
    cout<<a<<" "<<b<<" ";
    for (int i{1}; i<=n; i++){
        int nextNumber = a+b;
        cout<<nextNumber<< " ";
        a=b;
        b=nextNumber;
    }
    return 0;
}