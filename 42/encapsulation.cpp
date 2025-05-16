#include <iostream>
using namespace std;

class student
{
private:
    string name = "Om";
    int age = 0;
    int height = 100;

public:
    int getAge()
    {
        return this->age;
    }
    void setHeight(int h)
    {
        this->height = h;
    }
    int getHeight()
    {
        return this->height;
    }
};

int main()
{
    student Ram;
    cout << "Default age: " << Ram.getAge();
    cout << "\nDefault height : " << Ram.getHeight();
    Ram.setHeight(173);
    cout << "\nUpdated Height : " << Ram.getHeight();

    student laxaman;
    cout << "Default age: " << laxaman.getAge();
    cout << "\nDefault height : " << laxaman.getHeight();
    return 0;
}