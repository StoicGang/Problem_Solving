#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> printstar(int n)
{
    vector<string> temp;
    // upper part
    for (int i = 0; i < n; i++)
    {
        // space print krle
        for (int j = 0; j < i; j++)
        {
            temp.push_back(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            temp.push_back("*");
        }
        temp.push_back("\n");
    }

    // lower part
    for (int i = 0; i < n - 1; i++)
    {
        // spaces print krle
        for (int j = 0; j < n - i - 2; j++)
        {
            temp.push_back(" ");
        }
        // stars print krle
        for (int j = 0; j < n - i - 1; j++)
        {
            temp.push_back("*");
        }

        temp.push_back("\n");
    }
    return temp;
}

vector<string> arrowprint(int n)
{
    vector<string> temp;

    // Upper part
    for (int i = 0; i < n; i++)
    {
        string row;
        row.append(i, ' ');     // Add spaces
        row.append(i + 1, '*'); // Add stars
        temp.push_back(row);
    }

    // Lower part
    for (int i = n - 2; i >= 0; i--)
    {
        string row;
        row.append(i, ' ');     // Add spaces
        row.append(i + 1, '*'); // Add stars
        temp.push_back(row);
    }

    return temp;
}

int main()
{
    int n = 0;
    cin >> n;
    // vector<string> result = printstar(n);
    vector<string> result = arrowprint(n);
    for (const string &s : result)
    {
        cout << s << endl;
    }
    return 0;
}