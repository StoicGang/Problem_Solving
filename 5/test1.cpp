#include <iostream>
using namespace std;

int main()
{
    // Test 1

    // int a = 1;
    // int b = 2;

    // if(a-->0 || ++b >2){
    //     cout<<"Stage1 - Inside If ";
    // }else{
    //     cout<<"Stage2 - Inside Else ";
    // }
    // cout<<a<<" "<<b<<endl;
    //----> Stage2 - Inside Else 0 2

    // Test 2

    // int number =3;
    // cout<<(25 * (++number));
    //----> 100

    // Test 3

    int a{1};
    int b = a++;
    int c = ++a;
    cout << b;
    cout << c;
    //----> 1 3
    return 0;
}