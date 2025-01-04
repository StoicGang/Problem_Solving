#include<iostream>
using namespace std;

int main(){
        int n;
        cout<<"Enter the number : "<<endl;
        cin>>n;
        /*
        if(n>10)
                cout<<"number is greater than 10"<<endl;
        else
                cout<<"number is smaller than 10"<<endl;
        */
        /*
        if(n>0)
                cout<<"number is Positive"<<endl;
        else{
                if(n<0)
                        cout<<"number is Negative"<<endl;
                else
                        cout<<"number is zero"<<endl;
        }*/
        if (n>0)
                cout<<"Number is Positive"<<endl;
        else if (n<0)
                cout<<"Number is Negative"<<endl;
        else
                cout<<"Number is zero"<<endl;
return 0;
}
