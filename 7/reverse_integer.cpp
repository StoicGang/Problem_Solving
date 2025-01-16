#include<iostream>
#include <limits.h>

using namespace std;

int reverse(int x) {
           int result = 0;
    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        if (result > (INT_MAX / 10) || (result == INT_MAX / 10 && digit > 7)) {
            return 0; 
        }
        if (result < (INT_MIN / 10) || (result == INT_MIN / 10 && digit < -8)) {
            return 0; 
        }

        result = result * 10 + digit;
    }
    cout<<result;
    return result;
}

int main (){
    int n{0};
    cin>>n;
    reverse(n);
    return 0;
}