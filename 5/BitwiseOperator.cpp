#include<iostream>
using namespace std;

int main() {
    int a{1};
    int b{1};

    //Bitwise Operator
    cout<<"a&b :"<< (a&b)<<endl;
    cout<<"a|b :"<<(a|b)<<endl;
    cout<<"~a :" <<(~a)<<endl;
    cout<<"a^b :"<<(a^b)<<endl;

    //Right shift (Divide by 2)
    cout<<(17>>2)<<endl;
    cout<<(21>>2)<<endl;

    //Left Shift (multiply by 2)
    cout<<(17<<2)<<endl;
    cout<<(21<<2)<<endl;

    return 0;
}