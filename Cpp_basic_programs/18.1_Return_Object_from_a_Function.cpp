// Return Object from a Function in C++.

#include <iostream>
using namespace std;

class Student
{
    public:
        int marks1, marks2;
};

Student createStudent()
{
    Student student;

    student.marks1 = 96;
    student.marks2 = 75;

    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;

    return student;
}

int main()
{
    // Student student1 = createStudent();
            //or 
    Student student1;
    student1 = createStudent();

    return 0;
}