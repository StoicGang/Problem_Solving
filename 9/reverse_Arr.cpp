#include<iostream>
using namespace std;

int reversArr(int arr[], int size){
    for(int i = size-1; i >=0; i--){
        cout<<arr[i]<<" ";
    }
}

int ArrReverse(int arr[], int size){
        int left=0, right = size-1;
    while (left<right)
    {
        if(arr[left]==0 && left<right){
            left++;
        }
        else if(arr[right] == 1 && left<right){
            right--;
        }
        else if (left<right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
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