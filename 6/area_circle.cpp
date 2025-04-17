#include <bits/stdc++.h>
using namespace std;

#define pi 3.14 // this is called as macros in cpp

int area(int r)
{
    return (pi * r * r);
}

int main()
{
    cout << "Enter the value of R : ";
    float r;
    cin >> r;
    cout << "Area of circle " << area(r);
    return 0;
}