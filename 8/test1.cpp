// Write a code to denote the input number in terms of notes of 10, 20, 50, 100

#include <iostream>
using namespace std;

int main()
{
    int n{0};
    cout << "Enter the value of n: ";
    cin >> n;

    int count{0};

    switch (1)
    {
    case 1:
        count = n / 100;
        n %= 100;
        cout << "Number of 100 Rs notes : " << count << endl;

    case 2:
        count = n / 50;
        n %= 50;
        cout << "Number of 50 Rs notes : " << count << endl;

    case 3:
        count = n / 20;
        n %= 20;
        cout << "Number of 20 Rs notes : " << count << endl;

    case 4:
        count = n / 10;
        n %= 10;
        cout << "Number of 10 Rs notes : " << count << endl;

    default:
        break;
    }
    return 0;
}