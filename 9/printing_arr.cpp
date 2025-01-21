#include<iostream>
using namespace std;

//print function 
void Print_array(int arr[], int size){
    cout<<"printing the array using fucntion"<<endl;
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Printing done"<<endl;
}

int main (){
    int size {5};
    int array [size] { 1, 2, 3, 4, 5};
    cout<<"Printing array element: "<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    Print_array(array, size);
    
    return 0 ;
}