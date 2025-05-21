#include <iostream>
using namespace std;

class Animal
{
private:
public:
    int age;
    int weight;
    void speak()
    {
        cout << "\nis speaking in multilevel inheritance\n";
    }
};

class dog : public Animal
{
};

class german : public dog
{
};

int main()
{
    german shepherd;
    shepherd.age = 10;
    cout << "age : " << shepherd.age;
    shepherd.weight = 30;
    cout << "\nweight : " << shepherd.weight;
    shepherd.speak();

    return 0;
}