#include<iostream>
using namespace std;

bool linear_search(int arr[],int size,  int n){
    for(int i=0; i<size; i++){
        if (n == arr[i])
        { 
            return true;
        }
    }
    return false;
}

int main(){
    int arr[10] {10,2,53,64,3,12,50,6,74,8};

    int magic_num{0};
    cout<<"Enter the number you want to search : ";
    cin >>magic_num;
    cout<<boolalpha; //returns true and false insted of 1 and 0
    bool result = linear_search(arr,10, magic_num);
    cout<<"Number "<<magic_num<<" is in array : "<<result<<endl;
    
    return 0;
}