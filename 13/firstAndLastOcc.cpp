#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int start = 0;
    int answer = -1;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            answer = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
    }
    return answer;
}

int lastOcc(int arr[], int n, int key)
{
    int start = 0, answer = -1, end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            answer = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return answer;
}

int firstR(int arr[], int s, int e, int key)
{
    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        int leftResult = firstR(arr, s, mid - 1, key);
        return (leftResult != -1) ? leftResult : mid; // pehele aaya hain kya koi
    }
    else if (key > arr[mid])
    {
        return firstR(arr, mid + 1, e, key); // right chala ja bhai
    }
    else
    {
        return firstR(arr, s, mid - 1, key); // left chala ja
    }
}
int lastR(int arr[], int s, int e, int key)
{
    // base condition
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    // bad main aaya hain kya koi
    if (arr[mid] == key)
    {
        int rightResult = lastR(arr, mid + 1, e, key);
        return (rightResult != -1) ? rightResult : mid;
    }
    // right chala ja
    else if (key > arr[mid])
    {
        return lastR(arr, mid + 1, e, key);
    }
    // left chala ja
    else
    {
        return lastR(arr, s, mid - 1, key);
    }
}
int main()
{
    int arr[5] = {10, 20, 20, 20, 30};
    int first = firstR(arr, 0, 4, 20);
    int second = lastR(arr, 0, 4, 20);
    cout << "First & Last occurence of 20 are " << first << " " << second;
    return 0;
}