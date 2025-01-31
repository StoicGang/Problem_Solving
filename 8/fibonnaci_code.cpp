//write a code to give only nth fibonnaci number if given n as input

#include<iostream>
using namespace std;

int fibonacci_number(int n){
    int a{0};
    int b{1};
    if (n ==0 ) return a; //we explicitly added this statement so that the fibonacci series should start from the beginning
    if (n == 1) return b;
    int nextNumber{0};

    for (int i{2}; i<=n; i++){
        nextNumber = a+b;
        a=b;
        b=nextNumber;
    }
    return nextNumber;
}

int main (){
    int n{0};
    cout<<"Enter the value of n : ";
    cin>>n;
    int result = fibonacci_number(n);
    cout<<n<<"th fibonacci number in the series is : "<<result;
   
    return 0;
}