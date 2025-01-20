#include<iostream>
using namespace std;

int main (){
    int n{0};
    cout<<"Enter the value of n from 0 to 5: ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"first";
        break;
    
    case 2:
        cout<<"Second";
        break;
    
    case 3:
        cout<<"Third";
        break;

    case 4:
        cout<<"fourth";
        break;
    
    case 5:
        cout<<"fifth";
        break;
    
    default:
        cout<<"Zero";
        break;
    }
    return 0;
}