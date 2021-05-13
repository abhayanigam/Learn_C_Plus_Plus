// Enum in C++.

// Simple Enumeration Type
#include <iostream>
using namespace std;

//            0       1        2        3           4       5          6
enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Wednesday;
    cout << "Day " << today+1;
    return 0;
}

//-------------------------------------------------------------------------

// Changing Default Value of Enums
#include <iostream>
using namespace std;

enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32};

int main() {

    seasons s;

    s = summer;
    cout << "Summer = " << s << endl;

    return 0;
}

//-------------------------------------------------------------------------

// Also defined like this. --------<-
#include <iostream>         //      |
using namespace std;        //      |
                            //      ^
enum suit {                 //      |
    club = 0,               //      |
    diamonds = 10,          //      |
    hearts = 20,            //      ^
    spades = 3              //      |
} card;  //--------->----->-------->-

int main() 
{
    card = club;
    cout << "Size of enum variable " << sizeof(card) << " bytes.";   
    return 0;
}