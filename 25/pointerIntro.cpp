#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num = 5;
    cout << "Number is : " << num << endl;
    // address operator -->  &
    cout << "Address of the number : " << &num << endl;
    // pointer operator or reference operator --> *
    int *ptr = &num;
    cout << "Value of var is : " << *ptr << endl;
    cout << "Address of the var is : " << ptr << endl;

    int *p = 0;
    cout << "Value of Null ptr : " << *p << endl;
    return 0;
}