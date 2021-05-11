// Call by reference in C++

#include <iostream>
using namespace std;

void swap(int *x, int *y);

int main()
{
    int a = 100;
    int b = 200;

    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;

    /* calling a function to swap the values
    &a indicates pointer to a ie. address of variable a and
    &b indicates pointer to b ie. address of variable b
    */
    swap(&a, &b);

    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;

    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//----------------------------------------------------------------
// Call by value in C++

#include <iostream>
using namespace std;

void swap(int av, int ay);

int main()
{

    int a = 100;
    int b = 200;

    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;

    swap(a, b);

    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;

    return 0;
}

void swap(int x, int y)
{
    int temp;

    // changing parameter within function have no effect for argument
    temp = x; // save the value of x
    x = y;    // put y into x
    y = temp;

    return;
}

//----------------------------------------------------------------
// calling function in c++

#include <iostream>
using namespace std;

// function declaration
int max(int num1, int num2);

int main()
{
    int a = 100;
    int b = 200;
    int ret;

    ret = max(a, b);

    cout<<"Max value is : "<<ret<<endl;

    return 0;
}

// function returning the max between two numbers
int max(int num1, int num2)
{
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}