#include<iostream>
using namespace std;

int reversArr(int arr[], int size){
    for(int i = size-1; i >=0; i--){
        cout<<arr[i]<<" ";
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void input(int array[], int n){
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
}

int main (){
    int size{0};
    int arr[100] {};

    cout<<"Size: ";
    cin>>size;

    cout<<"Enter the values of array elements: ";
    input(arr, size);

    cout<<"Array is : ";
    printArray(arr,size);

    cout<<"Reversed Array : ";
    reversArr(arr, size);

    return 0;
}