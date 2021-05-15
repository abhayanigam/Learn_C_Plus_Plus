// Ploymorphism in C++.
// Poly (means)- Many
// morphism (means) - Forms

/*
    Types :
        Polymorphism - (1. Compile Time)  - (1. Function Overloading) 
                                          - (2. Operation Overloading)
                     - (2. Run Time) - (1. Virtual Functions)
*/

//1. Function Overloading.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class A{
    public:
        void func(){
            cout << "I am a function with no arguments. \n";
        }

        void func(int x){
            cout << "I am a function with int argument. \n";
        }

        void func(double x){
            cout << "I am a function with double argument. \n";
        }
};
int main()
{
    A obj;
    obj.func();
    obj.func(4);
    obj.func(3.4);
    return 0;
}

//----------------------------------------------------------------

// 2. Operation Overloading

// C++ program to overload the binary operator +
// This program adds two complex numbers

#include <iostream>
using namespace std;

class Complex
{
    private:
        float real;
        float imag;

    public:
        Complex() : real(0), imag(0) {}

        void input()
        {
            cout << "Enter real and imaginary parts respectively: ";
            cin >> real;
            cin >> imag;
        }

        Complex operator+(const Complex &obj)
        {
            Complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }

        void output()
        {
            if (imag < 0)
                cout << "Output Complex number: " << real << imag << "i";
            else
                cout << "Output Complex number: " << real << "+" << imag << "i";
        }
};

int main()
{
    Complex complex1, complex2, result;

    cout << "Enter first complex number:\n";
    complex1.input();

    cout << "Enter second complex number:\n";
    complex2.input();

    result = complex1 + complex2;
    result.output();

    return 0;
}

//------------------------------------------------------------------------------------------------

// 3. Run time Polymorphism

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class base {
    public:
        //Virtual is used to print 1st derived function.
        virtual void print(){
            cout << " This is the base class's print function "<< endl;
        }
        void display(){
            cout << " This is the base class's display function "<< endl;
        }
};

class derived : public base{
    public:
        void print(){
            cout << " This is the derived class's print function "<< endl;
        }
        void display(){
            cout << " This is the derived class's display function "<< endl;
        }
};

int main()
{
    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr->print();       // --> printing base class functions
    baseptr->display();     // --> printing base class functions
    return 0;
}