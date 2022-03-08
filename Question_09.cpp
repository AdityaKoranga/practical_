#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;

    Person(string n)
    {
        name = n;
    }

    Person()
    {
    }

    virtual void display()
    {
        cout << name << endl;
    }
};

class Student : public Person
{
public:
    string course;
    int marks;
    unsigned int year;

    Student(string n, string c, int m, int y) : Person(n)
    {
        course = c;
        marks = m;
        year = y;
    }

    Student()
    {
    }

    void display()
    {
        cout << name << " " << course << " " << marks << " " << year << endl;
    }
};

class Employee : public Person
{
public:
    string department;
    long int salary;

    Employee(string n, string d, long s) : Person(n)
    {
        department = d;
        salary = s;
    }

    void display()
    {
        cout << name << " " << department << " " << salary << endl;
    }
};

int main()
{
    Person *obj1;

    Student obj2("Aditya", "Computer_Science", 25, 1);

    obj1 = &obj2;
    obj1->display();

    Employee obj3("koranga", "Computer", 10000);
    obj1 = &obj3;
    obj1->display();

    return 0;
}