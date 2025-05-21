#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking\n";
    }
};

class dog : public Animal
{
public:
};

int main()
{
    dog d;
    d.speak();
    d.age = 10;
    cout << d.age;
    d.weight = 30;
    cout << d.weight;
    return 0;
}