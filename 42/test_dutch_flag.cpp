#include <iostream>
#include <vector>
using namespace std;

void dutch(vector<int> &vec)
{
    int start = 0, mid = 0, end = vec.size() - 1;
    while (mid <= end)
    {
        if (vec[mid] == 0)
        {
            swap(vec[start], vec[mid]);
            start++;
            mid++;
        }
        else if (vec[mid] == 2)
        {
            swap(vec[end], vec[mid]);
            end--;
            mid++;
        }
        else
        {
            mid++;
        }
    }
}

void input(vector<int> &vec)
{
    cout << "Enter the elements of array (only 0,1,2) " << endl;
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
    cout << endl;
}

int main()
{
    cout << "Dutch Flag Algorithm" << endl;
    int size;
    cout << "Enter the size: ";
    cin >> size;
    vector<int> vec(size);
    input(vec);
    cout << "Before applying : ";
    print(vec);
    dutch(vec);
    cout << "After applying :";
    print(vec);
    return 0;
}