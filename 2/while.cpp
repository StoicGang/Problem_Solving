#include <iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"enter the number to which you want to print: ";
    cin>>n;
    while (i<=n)
    {
        cout<< i <<endl;
        i= i+1;
    }
    return 0;
}