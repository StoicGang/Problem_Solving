#include <bits/stdc++.h>
using namespace std;

void input(vector<int> &vec)
{
    cout << "Enter vec elements: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
}

void print(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

int findUnique(vector<int> &vec)
{
    int ans = 0;
    for (int i = 1; i < vec.size(); i++)
    {
        ans ^= vec[i];
    }
    return ans;
}

vector<int> unions(vector<int> &vec1, vector<int> &vec2)
{
    vector<int> result;
    int i = 0, j = 0;
    while (i < vec1.size() && j < vec2.size())
    {
        if (vec1[i] < vec2[j])
        {
            result.push_back(vec1[i]);
            i++;
        }
        else if (vec1[i] > vec2[j])
        {
            result.push_back(vec2[j]);
            j++;
        }
        else
        {
            result.push_back(vec1[i]);
            i++;
            j++;
        }
    }
    while (i < vec1.size())
    {
        result.push_back(vec1[i]);
        i++;
    }
    while (j < vec2.size())
    {
        result.push_back(vec2[j]);
        j++;
    }
    return result;
}

int main()
{
    int size;
    cout << "Size :";
    cin >> size;
    vector<int> vec(size);
    input(vec);
    // cout << "Unique Element : " << findUnique(vec) << endl;
    vector<int> vec1(size);
    input(vec1);
    vector<int> vec2 = unions(vec, vec1);
    cout << "Union of vec1 and vec2 : ";
    print(vec2);
    return 0;
}