#include <iostream>
#include <string>
#include <vector>
using namespace std;

void counter(string str)
{
    if (str.empty())
    {
        cout << "a 0" << endl;
        return;
    }

    vector<int> count(26, 0);
    for (char c : str)
    {
        if (isalpha(c))
            count[tolower(c) - 'a']++;
    }

    char maxChar = 'a';
    int maxFreq = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > maxFreq || (count[i] == maxFreq && ('a' + i) > maxChar))
        {
            maxFreq = count[i];
            maxChar = 'a' + i;
        }
    }

    cout << maxChar << " " << maxFreq << endl;
}

int main()
{
    int T;
    cin >> T;

    cin.ignore();
    while (T--)
    {
        string str;
        cin >> str;
        counter(str);
    }
    return 0;
}
