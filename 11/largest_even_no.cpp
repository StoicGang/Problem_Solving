#include <bits/stdc++.h>
using namespace std;

string largestEven(string s)
{
    sort(s.begin(), s.end(), greater<char>()); // Sort in descending order
    int lastIndex = s.length() - 1;
    int smallestEvenIndex = -1;

    // Find the smallest even digit
    for (int i = lastIndex; i >= 0; i--)
    {
        if (!((s[i] - '0') & 1))
        {
            smallestEvenIndex = i;
            break;
        }
    }

    // edge case (no even digit)
    if (smallestEvenIndex == -1)
        return "-1";

    // Swap the smallest even digit to the last position
    swap(s[smallestEvenIndex], s[lastIndex]);

    return s;
}

string evenLargest(string s)
{
    vector<int> counts(10, 0);

    // Count occurrences of each digit
    for (char c : s)
    {
        counts[c - '0']++;
    }

    // Find the smallest even digit
    int smallestEven = -1;
    for (int i = 0; i <= 8; i += 2)
    {
        if (counts[i] > 0)
        {
            smallestEven = i;
            counts[i]--; // Reduce count as it will be placed at the end
            break;
        }
    }

    // If no even digit exists, return "-1"
    if (smallestEven == -1)
        return "-1";

    // Construct the largest number using frequency array
    string result = "";
    for (int i = 9; i >= 0; i--)
    {
        result += string(counts[i], '0' + i);
    }

    // Append the smallest even digit at the end
    result += (char)('0' + smallestEven);

    return result;
}

int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;
    cout << evenLargest(str);
    return 0;
}