#include <iostream>
using namespace std;


class Person
{
private:
    // Data member
    string name;
    int age;
    string gender;

public:
    // Constructor
    Person()
    {
        age = 0;
    }
    Person(string name, int age, string gender)
    {
        this->name = name; 
        this->age = age;
        this->gender = gender;
    }

    // Function member
    void output()
    {
        cout << "Name is : " << name << endl;
        cout << "Gender is: " << gender << endl;
        cout << "Age is : " << age << endl;
    }

    void setAge(int age)
    {
        if (age <= 0)
        {
            cout << " ⚠️ Age is valid!! " << endl;
            return;
        }
        this->age = age;
    }
    int getAge() { return age; }
};
int main()
{
    system("clear");
    // Create object from person class
    Person p1("james",23,"male");
    p1.setAge(-44);
    cout << p1.getAge();
    p1.output();
    return 0;
}