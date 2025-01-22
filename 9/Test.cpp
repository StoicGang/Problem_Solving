//To find the sum of elements of array 

#include<iostream>
using namespace std;

void input(int array[], int n){
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
}

int sumArray(int array[], int size){
    int sum =0;
    for(int i=0; i<size; i++){
        sum = sum + array[i];
    }
    return sum;
}

int main(){
    int size{0};
    int array [100] {};
    cout<<"Enter the size: ";
    cin>>size;
    input(array, size);

    int sum = sumArray(array, size);
    cout<<"Sum of element of array is : "<<sum;

    return 0;
}