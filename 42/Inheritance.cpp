#include <iostream>
using namespace std;

class human
{
private:
    bool ismarried{false};

protected:
    bool isVirgin{false};

public:
    int weight = 0;
    int height = 0;
    int age = 0;
    int getAge()
    {
        return this->age;
    }
    int setWeight(int w)
    {
        this->weight = w;
        return this->weight;
    }
};

class male : public human
{
private:
public:
    string profession = "None";
    string setProfession(string str)
    {
        this->profession = str;
        return this->profession;
    }
};

class female : private human
{
private:
public:
    bool ego{false};
    bool setEgo(bool p)
    {
        this->ego = true;
        return ego;
    }
};

class gey : protected human
{
private:
public:
};

int main()
{
    male sigma; // can access all data members of the class human and male
    cout << "Age of sigma :" << sigma.age << endl;
    cout << "Profession of sigma :" << sigma.profession << endl;
    sigma.setProfession("Hustler");
    cout << "Profession of sigma :" << sigma.profession << endl;

    female alpha; // can only access the data members present the class female not human
    cout << "Ego of alpha :" << boolalpha << alpha.ego << endl;
    alpha.setEgo(true);
    cout << "Ego of alpha :" << alpha.ego << endl;

    gey low; // can't access any data member
    // cout << low.ismarried << endl;
    return 0;
}