#include<iostream>
using namespace std;

int findpivot(int arr[], int n){
    int start=0;
    int end = n-1;
    int rightsum=0, leftsum=0;
    for (int i = 0; i < n; i++)
    {
        rightsum = rightsum + arr[i];
    }
    for(int i=0; i<n; i++){
        rightsum -= arr[i];
        if(rightsum == leftsum){
            return i;
        }
        leftsum += arr[i];
    }
    return -1;
}

int main(){
    int arr[6]{1,7,3,6,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"pivot element is at index: "<<findpivot(arr, n)<<endl;
    return 0;
}