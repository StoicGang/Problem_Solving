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

class dog
{
public:
    bool isloyal()
    {
        cout << boolalpha << true;
    }
};

class human : public dog, public Animal
{
};

int main()
{
    human h1;
    dog d1;

    // Demonstrating human class with multiple inheritance
    cout << "\nHuman properties:" << endl;
    h1.human::age = 25;    // Resolving ambiguity using scope resolution
    h1.human::weight = 70; // Resolving ambiguity using scope resolution
    h1.isloyal();
    h1.human::speak(); // Resolving ambiguity using scope resolution

    return 0;
}