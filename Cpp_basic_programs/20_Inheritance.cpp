// Inheritance in C++.

/*
    Important Notes :-
        Inheritance 
            - It is possible to inherit attributes and methodes from one class to another.

        Inheritance :- Derived Class (child) - The class that inherits from another class.
                    :- Base Class (Parent) - The class being inherited from.

        Types of Inheritance :
            1. Single Inheritance
            2. Multiple Inheritance
            3. Multi Level Inheritance
            4. Hybrid Inheritance
            5. Hierarchical Inheritance
*/


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 1. Single Inheritance
class A{
    public:
        void func(){
            cout << "Func of class A Single Inherited" << endl;
        }
};
class B : public A{
    // It inherits the public and protected members of class A.
};

int main()
{
    B obj;
    obj.func();
    return 0;
}
//----------------------------------------------------------------

// 2. Multiple Inheritance
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class A{
    public:
        void Afunc(){
            cout << "Func of class A Multiple Inherited" << endl;
        }
};
class B{
    public:
        void Bfunc(){
            cout << "Func of class B Multiple Inherited" << endl;
        }
};
class C : public A, public B{
    public:
        // Also we can add more members.
};

int main()
{
    C obj;
    obj.Afunc();
    obj.Bfunc();
    return 0;
}
//----------------------------------------------------------------

// 3. Multi Level Inheritance
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class A{
    public:
        void Afunc(){
            cout << "Func of class A Multi Level Inherited" << endl;
        }
};
class B : public A{
    public:
        void Bfunc(){
            cout << "Func of class B Multi Level Inherited" << endl;
        }
};
class C : public B{
    public:
        // Also we can add more members.
};

int main()
{
    C obj;
    obj.Afunc();
    obj.Bfunc();
    return 0;
}
//----------------------------------------------------------------

// 4. Hybrid Inheritance
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class A{
    public:
        void Afunc(){
            cout << "Func of class A Hybrid Inherited" << endl;
        }
};
class B : public A{
    public:
        void Bfunc(){
            cout << "Func of class B Hybrid Inherited" << endl;
        }
};
class C{
    public:
        void Cfunc(){
            cout << "Func of class C Hybrid Inherited" << endl;
        }
};
class D : public B, public C{
    public:
        // Also we can add more members.
};

int main()
{
    D obj;
    obj.Afunc();
    obj.Bfunc();
    obj.Cfunc();
    return 0;
}
// //----------------------------------------------------------------

// 5. Hierarchical Inheritance
/*
                |--------> Class B ---------> Class D
                |                  |--------> Class E
    class A :---|
                |                  
                |--------> Class B ---------> Class F
                                   |--------> Class G
*/
