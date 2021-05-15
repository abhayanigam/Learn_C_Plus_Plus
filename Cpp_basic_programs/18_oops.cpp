// Oops in C++.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// This is the private class we cannot use it publicly
// class student{
//     string name;    // Private Data members
//     int age;        // Private Data members
// };

// Note :-
//     Class have - Data members
//                - Data Functions
// They can be accessed within the class ,outside the class ,and/or by the inherited class.

// To make this class public or use this in our class we use (public:).
class student{
    public:
        string name;    // Data members
        int age;        // Data members
        int marks;      // Data members

//--------------------- Constructors ----------------------------------------------------------------

    // Default constructor.
    student(){
        // This is the constructor that has no parameter and it is known as default constructor.
        // If we didn't make constructor like this then we can make another object in the main function 
        // and student a(); is the only object that calls this class.
        cout << "Default constructor " << endl;
    }

    //Parameterized Constructor
    student(string s,int g){
        cout << "Parameterised Constructor" << endl;
        name = s;
        age = g;
    }

    //Copy Constructor
    student(student &a){
        cout << "Copy Constructor" << endl;
        name = a.name;
        age = a.age;
    }

    // Setter Constructor
    void setName(string s){
        name = s;
    }

    //Getter Constructor
    void getName(){
        cout << "Name : "<< name << endl;
        cout << "Age  : "<< age << endl;
    }
//--------------------------------------------------------------------------------------------------    

//--------------------- Destructors ----------------------------------------------------------------
    // Use this (~) sign to make destructors.
    // we cannot pass any parameters and we can't return anything.
    ~student(){
        cout << "Destructor called " << endl;
    }
//--------------------------------------------------------------------------------------------------    
    // Operator overloading
    bool operator == (student a){
        if (name == a.name && age == a.age)
        {
            return true;
        }
        return false;
    }

    // Here do not need to pass any parameters or objects like other functions
    void printInfo(){
        cout << "Name : "<< name << endl;
        cout <<"Age :   " << age << endl;
    }
};

// function that has objects as parameters
void calculateAverage(student s1, student s2) {
    // calculate the average of marks of s1 and s2 
    int average = (s1.marks + s2.marks) / 2;
    cout << "Average Marks = " << average << endl;
}

int main()
{
    // We can access like this and print this to :-
    // student a;
    // a.name = "Rohan";
    // a.age = 13;

    // We can also make a array of this to print this :
    // student a[2];
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Enter the name : ";
    //     // cin >> a[i].name;
    //         //or
    //     string s;
    //     cin >> s;
    //     a[i].setName(s);

    //     cout << "Enter the age : ";
    //     cin >> a[i].age;
    // }

    // cout << endl;

    // // To print details we can use the normal for loop method or we use the class function

    // for (int i = 0; i < 3; i++)
    // {
    //     a[i].printInfo();
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << a[i].name << endl;
    //     cout << a[i].age << endl;
    // }

    // Also we can use this with the help of constructor
    cout << endl;
    student a("Rohit",23);
    a.getName();  // or a.printInfo();

    //Creating a new object.
    cout << endl;
    student b;

    //Making copy constructor (Coping the values of a to c)
    cout << endl;
    student c = a; // or student c(a);
    c.printInfo();

    //To check objects are same or not.
    cout << endl;
    if (c == a)
    {
        cout << endl;
        cout << "Same" << endl;
    }
    else{
        cout << endl;
        cout << "Not" << endl;
    }

    cout << endl;

    // pass the objects as arguments
    // calculateAverage(x,y);
    return 0;
} //  Distructor calls here at the end of the program to destory