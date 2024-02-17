#include<bits/stdc++.h>
using namespace std;
class Student
{
private:
    string name;
    int age;
    double GPA;

public:

    Student(const string& studentName, int studentAge, double studentGPA)
        : name(studentName), age(studentAge), GPA(studentGPA)
    {
    }


    void printDetails() const
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student GPA: " << GPA << endl;
    }
};

int main()
{

    Student student1("Md.Shakil Rana", 21, 3.86);
    student1.printDetails();

    return 0;
}

