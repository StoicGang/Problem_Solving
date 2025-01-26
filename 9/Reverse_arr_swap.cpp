#include<iostream>

using namespace std;

void swap_arr(int arr[], int n){
    int start{0};
    int end{n-1};
    while (start<=end)
    {
        std::swap(arr[start], arr[end]); //predefined function to swapping of elements of array 
        start++;
        end--;
    }
    
}

void arr_swap(int arr[], int n) {
    int temp;
    int start = 0;
    int end = n - 1;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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
    cout<<endl;
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

    cout<<"Reversed Array is : ";
    //swap_arr(arr, size);
    arr_swap(arr, size);
    printArray(arr,size);
    return 0;
}