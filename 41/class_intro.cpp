#include <bits/stdc++.h>
using namespace std;

class hero
{
    string skills = "Ironman"; // default private
private:
    char ID = 'A';

public:
    int health = 80;
    static int Fucker_sucker;
    char *name;
    // methods to access the private variable
    char getID()
    {
        return this->ID;
    }
    int getHealth()
    {
        return this->health;
    }
    void setID(char ch)
    {
        this->ID = ch;
    }
    void setHealth(int hel)
    {
        this->health = hel;
    }
    void setName(char name[])
    {
        // this->name = name;
        strcpy(this->name, name);
    }

    void print()
    {
        cout << "Name " << this->name << endl;
        cout << "Health " << this->health << endl;
        cout << "ID " << this->ID << endl;
    }

    // constructors
    hero()
    {
        // this is default constructor
        cout << "Default constructor called\n";
        name = new char[100];
    }
    hero(int health)
    {
        // this is a parameterized constructor
        cout << "Parameterized constructor called\n";
        this->health = health;
    }
    hero(int health, char ID)
    {
        // parameterized contructor
        cout << "parameterized constructor called\n";
        this->health = health;
        this->ID = ID;
    }
    hero(hero &temp)
    {
        cout << "Copy constructor called " << endl;
        // this is by default shallow
        this->health = health;
        this->name = name;
        this->ID = ID;

        // deep copy constructor
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
    }
    // can only access the static variables
    static int func()
    {
        return Fucker_sucker;
    }

    ~hero()
    {
        // destructor implementation
        cout << "destructor called\n";
    }
};

int hero::Fucker_sucker = 102;

int main()
{
    // hero superman;
    // // superman.name = "Error"; //This will give error as we can't access the private variable outof the class

    // // Setting and accessing health
    // superman.health = 40;
    // cout << "Health of superman is: " << superman.health << endl;

    // // Using the getter and setter methods for private variables
    // cout << "Accessing the private variables of hero:" << endl;

    // // Setting private variables
    // superman.setID('S');
    // superman.setskills("Superman");

    // // Getting private variables
    // cout << "ID: " << superman.getID() << endl;
    // cout << "Name: " << superman.getName() << endl;

    // // static allocation
    // hero ironman;
    // cout << "ID is : " << ironman.getID() << endl;
    // cout << "health is : " << ironman.health << endl;

    // // dynamic allocation
    // hero *h1 = new hero;
    // cout << "ID is : " << (*h1).getID() << endl;
    // cout << "health is : " << (*h1).health << endl;

    // cout << "ID is : " << h1->getID() << endl;
    // cout << "health is : " << h1->health << endl;

    // // contructors
    // hero watermelon(70, 'W');
    // watermelon.print();
    // // copy constructor
    // hero cocomelon(watermelon);
    // cocomelon.print();

    // // deep copy & shallow copy
    // hero hero1;
    // hero1.setID('1');
    // hero1.setHealth(20);
    // char name[7] = "Gotya";
    // hero1.setName(name);
    // // hero1.print();

    // hero hero2(hero1);
    // // hero2.print();

    // hero1.name[0] = 'S';
    // // hero1.print();
    // // hero2.print();

    // // copy assignment operator
    // hero2 = hero1;
    // hero1.print();
    // hero2.print();

    // hero *hero3 = new hero();
    // // manually called the destructor
    // delete hero3;

    // static variable(belong to class not object)
    cout << hero::Fucker_sucker << endl;

    // static function (no need to create the object, this keyword is not used)

    return 0;
}