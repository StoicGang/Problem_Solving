//write a cpp code to find the duplicate elements in the array 
#include<iostream>
using namespace std;

void duplicate_finder(int arr[], int n){
    cout<<"Duplicate elements of array are : [ ";
    bool is_present = false;
    for(int i=0; i<n; i++){
        for (int j= i+1; j<n; j++){
            if (arr[i] == arr [j])
            {
                cout<<arr[i]<<" ";
                is_present = true;
                break;
            }
        }
    }
    cout<<"]";
    if (!is_present) {
        cout << "None";
    }
    cout << endl;
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

int main(){
    int arr [200]{};
    int size{0};
    cout<<"Enter the size of an array: ";
    cin>>size;
    cout<<"Enter the array elements : ";
    input(arr, size);

    duplicate_finder(arr, size);

    return 0;
}