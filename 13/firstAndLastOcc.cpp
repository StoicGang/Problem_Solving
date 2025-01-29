#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int start=0;
    int answer=-1;
    int end=n-1;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        if(arr[mid] == key){
            answer = mid;
            end = mid-1;
        }
        else if (key > arr[mid]){
            start = mid+1;
        }
        else if (key < arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return answer;
}

int lastOcc(int arr[], int n, int key){
    int start=0, answer=-1, end=n-1;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        if(arr[mid] == key){
            answer = mid;
            start = mid+1;
        }
        else if (key > arr[mid]){
            start = mid+1;
        }
        else if (key < arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return answer;
}


int main(){
    int arr[5]={10,20,20,20,30};
    int first = firstOcc(arr,5,20);
    int second = lastOcc(arr,5,20);
    cout<<"First & Last occurence of 20 are "<<first<<" "<<second;
    return 0;
}