#include <iostream>
using namespace std;

int main()
{
    int sum{0};
    int n{0};
    cout << "Enter the number upto u want to find the sum : ";
    cin >> n;
    // without the loops
    cout << "Sum of natural numbers without loops : " << n * (n + 1) / 2 << endl;
    // for (int i{1}; i<=n; i++){
    //     //sum = sum + i;
    //     sum += i;
    // }
    // cout<<"Sum of numbers is : "<<sum<<endl;

    // use while loop
    int i{1};
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "Sum using while loop is : " << sum << endl;
    return 0;
}