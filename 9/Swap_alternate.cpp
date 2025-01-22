//write a code to swap the alternate elements of arrays using swap function 
#include<iostream>
using namespace std;

void alternate_swap(int arr[], int n){
    for(int i{0}; i<n-1; i+=2){      //we are running this for loop till(n-2) only to ensure that the arr[i+1] is valide
        swap(arr[i], arr[i+1]);
    }
}

void input(int array[], int n){
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
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

    cout<<"Array after swaping of alternate elements : [";
    alternate_swap(arr, size);
    printArray(arr, size);

    return 0;
}