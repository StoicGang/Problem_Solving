#include <iostream>
using namespace std;

int main() {
    int n{0};
    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    int result = 0;
    int position = 1;
    
    while (n != 0) {
        int bit = n & 1;            
        result += bit * position;   
        position *= 10;            
        n = n >> 1;                 
    }

    cout << "Converted binary form is: " << result << endl;
    return 0;
}