#include<iostream>
using namespace std;

int power_function(int a, int b){
    int power = 1;
    for (int i = 0; i < b; i++)
    {
        power = power * a;
    }
    return power;
}

int main(){
    int a; 
    int b;
    cin>>a>>b;
    int power = power_function(a,b);
    cout<<a << " to the power "<<b<< " is "<< power<<endl;

    return 0;
} 