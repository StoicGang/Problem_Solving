#include<iostream>
using namespace std;

int main () {
    int arr [5] {1,2,3,4,5};
    cout<<"0th index : "<<arr[0]<<endl;
    cout<<"1st index : "<<arr[1]<<endl;
    cout<<"4th index : "<<arr[4]<<endl;
    cout<<"Size of arr : "<<sizeof(arr)/sizeof(int)<<endl;

    char arrq [5] {'a', 'b', 'c', 'd', 'e'};
    cout<<"0th index : "<<arrq[0]<<endl;
    cout<<"1st index : "<<arrq[1]<<endl;
    cout<<"4th index : "<<arrq[4]<<endl;
    cout<<"Size of arr : "<<sizeof(arrq)/sizeof(char)<<endl;
    return 0;
}