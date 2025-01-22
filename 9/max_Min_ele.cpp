#include<iostream>
#include<limits.h> //to include the minimum value of integer

using namespace std;

int getMax (int array[], int n){
    int max_ele  = INT_MIN;
    for (int i =0; i<n; i++){

        max_ele = max (max_ele, array[i]);

        // following lines can be skipped using above predefined function 
        // if(array[i] > max_ele){
        //     max_ele = array[i];
        // }
    }
    return max_ele;
}

int getMin (int array[], int n){
    int min_ele  = INT_MAX;
    for (int i =0; i<n; i++){

        min_ele = min (min_ele, array[i]);

        // following lines can be skipped using above predefined function 
        // if(array[i] < min_ele){
        //     min_ele = array[i];
        // }
    }
    return min_ele;
}

int main(){
    int array [100] {4, 56, 32, 89,2};

    int size{0};
    cout<<"Size : ";
    cin>>size;
    cout<<"Enter "<<size <<" elements of array "; 
    
    //int arr1 [size]; ==> this is malpractice for now 1st one is better than this

    for (int i=0; i<size; i++){
        cin>>array[i];
    }

    int max_ele = getMax(array, size);
    int min_ele = getMin(array, size);

    cout<<"Max element : "<<max_ele<<endl;
    cout<<"Min element : "<<min_ele<<endl;

    return 0;
}