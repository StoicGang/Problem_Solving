#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of an Integer :";
    cin >> n;
    string str = to_string(n);
    int oddsum = 0, evensum = 0;
    for (int i = 0; i < str.length(); i++)
    {
        int digit = str[i] - '0';
        if (digit % 2 == 0)
        {
            evensum += digit;
        }
        else
        {
            oddsum += digit;
        }
    }
    cout << "\nEven sum :" << evensum << " Odd Sum :" << oddsum;
    return 0;
}
