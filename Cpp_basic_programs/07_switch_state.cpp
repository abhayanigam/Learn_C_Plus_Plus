// Switch Statement in C++

#include <iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Enter a character : ";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Bey"<<endl;
        break;
    
    default: 
        cout<<"Not in option";
        break;
    }
    return 0;
}