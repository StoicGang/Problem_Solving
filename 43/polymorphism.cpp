#include <iostream>
using namespace std;

class Func_overloading
{
private:
public:
    int age;
    int weight;
    void sayHello()
    {
        cout << "Hello, Default\n";
    }
    int sayHello(char ch)
    {
        cout << "changed type of overloaded func\n";
        return 0;
    }
    void sayHello(string str)
    {
        cout << "Hello, " << str << endl;
    }
};

class operator_overloading
{
private:
public:
    int age;
    int weight;
    int add()
    {
        return age + weight;
    }
    void operator+(operator_overloading &obj)
    {
        int val1 = this->age;
        int val2 = obj.age;
        cout << "output : " << val1 + val2 << endl;
    }
    void operator()()
    {
        cout << "Bhai c* nahi bracket hu" << endl;
    }
};

class C
{
};

int main()
{
    // Func_overloading oj;
    // oj.sayHello();
    // oj.sayHello('r');
    // oj.sayHello("Gomya");

    operator_overloading obj1, obj2;
    obj1.age = 40;
    obj2.age = 34;
    obj1 + obj2;
    obj1();

    return 0;
}