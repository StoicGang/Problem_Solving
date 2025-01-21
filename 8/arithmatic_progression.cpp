#include<iostream>
using namespace std;

int AriP(int start, int n, int d){
    int term = 0;
    //formula ==> a + (n-1)d
    term = start + ((n-1)*d);
    return term;
}

int main (){
    int start{0};
    int n{0};
    int d{0};
    cout<<"Enter the start value: ";
    cin>>start;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of common difference : ";
    cin>>d;
    int result = AriP(start, n,d);
    cout<<n<<"th term of AP is : "<<result;
    return 0;
}