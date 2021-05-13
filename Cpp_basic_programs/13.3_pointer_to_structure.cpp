// Pointers to Structure in C++.

#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inch;
};

int main()
{
    Distance *ptr, d;

    ptr = &d;

    cout << "Enter feet: ";
    cin >> ptr->feet;
    cout << "Enter inch: ";
    cin >> ptr->inch;

    //         or
    //using the (->) operator because the (.) operator has a higher precedence

    // cout << "Enter feet: ";
    // cin >> (*ptr).feet;
    // cout << "Enter inch: ";
    // cin >> (*ptr).inch;

    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches";

    return 0;
}