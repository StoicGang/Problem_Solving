#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> vec)
{
    cout << "printing\n";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    // create a vector
    vector<int> arr;
    // cout << sizeof(arr) / sizeof(int); // this is compiler dependent
    cout << arr.size() << endl;     // no of elements present in vector
    cout << arr.capacity() << endl; // no of element that can be stored

    // insert
    arr.push_back(4);
    arr.push_back(7);
    arr.push_back(9);
    arr.push_back(3);

    // print
    printvec(arr);

    // remove last element
    arr.pop_back();
    printvec(arr);
    cout << arr.size() << endl;     // no of elements present in vector
    cout << arr.capacity() << endl; // no of element that can be stored

    vector<int> other(10);
    printvec(other);
    cout << other.size() << endl;     // no of elements present in vector
    cout << other.capacity() << endl; // no of element that can be stored

    // isempty
    cout << boolalpha << "Vector other is empty :" << other.empty() << endl;

    return 0;
}