#include "student.h"

Student::Student(string n, int a)
{
    Name = n;
    Age = a;
}

void Student::setAge(int A)
{
    Age = A;
}

void Student::setName(string N)
{
    Name = N;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout << "Name of student: " << Name << endl;
    cout << "Age of student: " << Age << endl;
}
