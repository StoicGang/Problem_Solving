#include <iostream>
using namespace std;

int main(){
    //sum of the number 
    
    int i=2;
    int n;
    cout<<"enter the number to which you want to print or find the sum : ";
    cin>>n;
    /*
    int sum{0};
    // while (i<=n)
    // {
    //     cout<< i <<endl;
    //     i= i+1;
    // }
    while (i<=n)
    {
        sum = sum + i;
        i=i+1;
    }
    cout<<"sum is : "<<sum;
    */

   //Prime number 
   while (i<n)
   {
    if (n%i==0){
        cout<<"Number is not prime for: "<< i <<endl;
    }
    else{
        cout<<"Number is Prime for: "<< i <<endl;
    }
    i = i+1;
   }
   

    return 0;
}