
/**
title Factorial Calculator

problem
 Calculate the factorial of a given positive integer N, where factorial is the product
 of all integers from 1 to N. The program handles large factorials by storing digits
 in a vector.

input
 - Single integer N representing the number whose factorial needs to be calculated

output
 - The factorial of N printed as a sequence of digits without any separators

constraints
 - 1 <= N <= 100
 - Result can be a very large number

approach
 1. Initialize result vector with 1 [O(1)]

 2. For each number i from 2 to N: [O(N)]
    - Multiply each digit in result by i, handling carry [O(D) where D is digits]
    - Process carry and add new digits at start if needed

 3. Print all digits in result vector [O(D)]

 Time Complexity: O(N*D) where D is the number of digits in result
 Space Complexity: O(D) for storing the result vector

 Note: The number of digits D in N! is approximately N*log(N) for large N
 */
#include <iostream>
#include <vector>
using namespace std;

vector<int> factorial(int n)
{
    vector<int> temp;
    temp.push_back(1);
    for (int i = 2; i <= n; i++)
    {
        int carry = 0;
        for (int j = temp.size() - 1; j >= 0; j--)
        {
            int sum = (temp[j] * i) + carry;
            temp[j] = sum % 10;
            carry = sum / 10;
        }
        // Add new digits at the beginning
        while (carry)
        {
            temp.insert(temp.begin(), carry % 10);
            carry /= 10;
        }
    }
    return temp;
}

int main()
{
    int n;
    cin >> n;
    vector<int> result = factorial(n);
    for (int digit : result)
    {
        cout << digit;
    }
    cout << endl;
    return 0;
}