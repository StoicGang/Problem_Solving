#include <iostream>
using namespace std;

int main()
{
    int a{0};
    cout << "Enter the value of a : ";
    cin >> a;
    int b{0};
    cout << "Enter the value of b : ";
    cin >> b;
    char ops{};
    cout << "Enter the operation you want to perform : ";
    cin >> ops;

    switch (ops)
    {
    case '+':
        cout << "a + b = " << (a + b);
        break;
    case '-':
        cout << "a - b = " << (a - b);
        break;
    case '*':
        cout << "a * b = " << (a * b);
        break;
    case '/':
        cout << "a / b = " << (a / b);
        break;
    case '%':
        cout << "a % b = " << (a % b);
        break;
    default:
        cout << "a : " << a << " b : " << b;
        break;
    }

    return 0;
}