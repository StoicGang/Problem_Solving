//swap alternate elemnents of an array 
#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void input(int array[], int n){
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
}

void swap_alternate(int arr[], int size){
    for (int i=0; i<size; i = i +2){
        if(i+1 < size){
            
            //using predefined function 
            //swap(arr[i], arr[i+1]); 

            //not using predefined function
            int temp ;
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(){
    int arr [200]{};
    int size{0};
    cout<<"Enter the size of an array: ";
    cin>>size;
    cout<<"Enter the array elements : ";
    input(arr, size);

    cout<<"Elements of arrays are : [ ";
    printArray(arr,size);
    cout<<"]"<<endl;

    cout<<"After swapping of elements : [ ";
    swap_alternate(arr, size);
    printArray(arr, size);
    cout<<"]";
    return 0;
}