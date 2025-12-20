#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> multiply(int no_pubs, string input)
{
    vector<string> ans;
    string number;
    for (int i = 0; i < input.size(); i++)
    {
        number.push_back(input[i]);
        if (input[i] == ' ')
        {
            float convNo = stof(number) * no_pubs;
            ans.push_back(to_string(convNo));
            ans.push_back(" ");
            string description;
            for (int j = i + 1; j < input.size(); j++)
            {
                description.push_back(input[j]);
            }
            ans.push_back(description);
            break;
        }
    }
    return ans;
}

int main()
{
    int no_pubs = 0;
    cin >> no_pubs;

    string input = "200 gram of milk";
    vector<string> ans = multiply(no_pubs, input);
    for (string s : ans)
    {
        cout << s << " ";
    }
    return 0;
}
