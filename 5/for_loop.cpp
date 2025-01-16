#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter the value of n : ";
    cin>>n;

    cout<<"printing the values of numbers from 1 to "<<n<<endl;
    

    //Normal for loop
    // for(int i=1; i<=n; i++){
    //     cout<<i<<endl;
    // }

    //Infinite for loop
    // int i{1};
    // for (; ; )
    // {
    //    cout<<i<<endl;
    // }

    //finite for loop using break statement
    // int i{1};
    // for (;;){
    //     if (i<=n){
    //             cout<<i<<endl;
    //     }else{
    //         break;
    //     }
    //     i++;
    // }

    //For loop with multiple condition 
    for (int a=1,  b=1, c=n; c>0 && b<(n-1) && a<n; a++, b++, c--){
        cout<<"a "<<a <<" b "<< b << " c "<<c<<endl;
    }
    
    return 0;
}