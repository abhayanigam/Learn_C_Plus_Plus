/*
    > :: is known as the scope resolution operator.
        Can be used like this:
            :: identifier
                1. class-name :: identifier
                2. namespace :: identifier

    > The :: are used to dereference scopes.
    > The names cout and cin are defined within std, so we have to qualify their names with std::.
*/
/*
    class foo
    {
    public:
        foo();
        void bar();
    };

    foo::foo()
    {
    // Implement the constructor
    }

    void foo::bar()
    {
    // Implement bar
    }

    // The constructor named foo is a member of the class named foo. 
    // They have the same name because its the constructor. The function bar is also a member of foo.
    // Because they are members of foo, when referring to them from outside the class, we have to qualify their names.
    //  After all, they belong to that class. So if you're going to define the constructor and bar outside the class, 

    // If you had not put the foo:: qualification on the names, you would be defining some new functions in the global scope,
    // rather than as members of foo. For example, this is entirely different bar:

    void bar()
    {
    // Implement different bar
    }

    // It's allowed to have the same name as the function in the foo class because it's in a different scope. 
    // This bar is in the global scope, whereas the other bar belonged to the foo class.
*/

#include <iostream>
using namespace std;
int variable = 20;
int main()
{
    float variable = 30;
        
    cout << "This is local to the main function: " << variable << endl;
    cout << "This is global to the main function: " << ::variable << endl;
        
    return 0;
}

// To Know in Depth visit :- https://stackoverflow.com/questions/15649580/using-in-c
