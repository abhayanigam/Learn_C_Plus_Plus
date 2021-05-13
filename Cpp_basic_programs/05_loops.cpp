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

// Method 2 using for loop
    // int numbers[5] = {7, 5, 6, 12, 35};

    // cout << "The numbers are: ";

    // //  Printing array elements
    // // using range based for loop
    // for (const int &n : numbers) {
    //     cout << n << "  ";
    // }

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