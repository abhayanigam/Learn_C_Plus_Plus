//For loop in C++

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size :- ";
    cin>>size;

    int sum = 0;

    for (int i = 1; i <= size; i++)
    {
        sum = sum + i;
    }

    cout<<"Sum is "<<sum<<endl;
    return 0;
}

//----------------------------------------------------------------

//While loop in c++

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size :- ";
    cin>>size;

    int sum = 0,i = 1;

    while (i <= size)
    {
        sum += i;
        i++;
    }

    cout<<"Sum is "<<sum<<endl;
    return 0;
}

//----------------------------------------------------------------

//Do while loop in c++

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size :- ";
    cin>>size;

    int sum = 0,i = 1;

    do{
        sum += i;
        i++;
    }while (i <= size);
    

    cout<<"Sum is "<<sum<<endl;
    return 0;
}