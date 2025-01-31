#include <iostream>
using namespace std;

void findTrip(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == n)
                {
                    cout << "( " << arr[i] << " " << arr[j] << " " << arr[k] << " )" << endl;
                }
            }
        }
    }
}

void input(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[200]{};
    int size{0};
    int Magic_number{0};
    cout << "Size : ";
    cin >> size;
    cout << "Element : ";
    input(arr, size);
    cout << "Enter the magic sum for which you want to find the triplet : " << endl;
    cin >> Magic_number;
    findTrip(arr, size, Magic_number);
    return 0;
}