// Encapsulation in C++.
// Encapsulation is to hiding "sensitive" data from the user.

/*
 Important Notes :-
    Class - Data members
          - Data Functions
    (They can be accessed within the class ,outside the class ,and/or by the inherited class.)

     Access Modifiers - Public
                      - Private
                      - Protected 

    Private - Objects cannot access the data members and function outside the class.
                "These members can only be accessed inside the class."

    Protected - Objects cannot access the data members and function outside the class.
                "These members can be accessed inside the class and inherited class."

    Advantage of Encapsulation
        - Good coding  practice , useful in interviews.
        - Increased security of data.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class A{
    public:
        int a;
        void funcA(){
            cout << "FuncA in Public\n";
        }

    private:
        int b;
        void funcB(){
            cout << "FuncB in Private\n";
        }

    protected:
        int c;
        void funcC(){
            cout << "FuncC in Protected\n";
        }
};

int main()
{
    A obj;
    obj.funcA();
    obj.funcB(); // --> We cannot use this function
    return 0;
}