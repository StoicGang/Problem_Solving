//write a code to find the sum of triplet(alternate three elements) in array 
#include <iostream>
using namespace std;

void findTripletSums(int arr[], int n) {
    bool found = false;
    cout << "Sums of triplets:" << endl;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = arr[i] + arr[j] + arr[k];
                cout << "Triplet: (" << arr[i] << ", " << arr[j] << ", " << arr[k] << ") -> Sum: " << sum << endl;
                found = true;
            }
        }
    }
    if (!found) {
        cout << "No triplets found " << endl;
    }
}

void input(int array[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
}

int main() {
    int arr[100];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size < 3) {
        cout << "An array needs at least 3 elements to form triplets" << endl;
        return 0;
    }

    cout << "Enter the elements of the array: ";
    input(arr, size);

    findTripletSums(arr, size);

    return 0;
}
