// Templates in C++.
/*
    Using Templates to create a single function or a class to work with different data types using templates.
    
    Templates are often used in larger codebase for the purpose of code reusability and flexibility of the programs.

    The concept of templates can be used in two different ways:

    1. Function Templates
    2. Class Templates

    A function template starts with the keyword template followed by template parameter/s 
    inside  < > which is followed by function declaration.

        template <class T>
        T someFunction(T arg)
        {
            ... .. ...
        }

    In the above code, T is a template argument that accepts 
        different data types (int, float), and class is a keyword.

    You can also use keyword typename instead of class in the above example.
*/

#include <iostream>
using namespace std;

// Ex1. Fuction template to find the largest number.
//Template Function
template <class L>
L large(L n1, L n2){
    return (n1 > n2) ? n1 : n2;
}

// Ex.2 Swap Data Using Function Templates with typename
template <typename T>
void Swap(T &n1, T&n2){
    T temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

int main()
{
    int i1,i2;
    cout << "Enter the value for i1 : ";
    cin >> i1;
    cout << "Enter the value for i2 : ";
    cin >> i2;

    cout << large(i1,i2) << " is larger." << endl;

    float f1,f2;
    cout << "Enter the value for f1 : ";
    cin >> f1;
    cout << "Enter the value for f2 : ";
    cin >> f2;

    cout << large(f1,f2) << " is larger." << endl;

    double d1,d2;
    cout << "Enter the value for d1 : ";
    cin >> d1;
    cout << "Enter the value for d2 : ";
    cin >> d2;

    cout << large(d1,d2) << " is larger." << endl;
    cout << "\n";

//--------------------------------------------------------------------

    int n1 = 1, n2 = 2;
	float F1 = 1.1, F2 = 2.2;
	char c1 = 'a', c2 = 'b';


	cout << "Before passing data to function template.\n";
	cout << "n1 = " << n1 << "\nn2 = " << n2;
	cout << "\nF1 = " << F1 << "\nF2 = " << F2;
	cout << "\nc1 = " << c1 << "\nc2 = " << c2;

	Swap(n1, n2);
	Swap(F1, F2);
	Swap(c1, c2);

        cout << "\n\nAfter passing data to function template.\n";
	cout << "n1 = " << n1 << "\nn2 = " << n2;
	cout << "\nF1 = " << F1 << "\nF2 = " << F2;
	cout << "\nc1 = " << c1 << "\nc2 = " << c2;

    return 0;
}