// C++ Program to display address of each element of an array 

#include <iostream>
using namespace std;

int main()
{
    float arr[3];

    // declare pointer variable
    float *ptr; 
    
    cout << "Displaying address using arrays: " << endl;

    // use for loop to print addresses of all array elements
    for (int i = 0; i < 3; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    //Note 
    //  ptr = &ptr ( & = address)
    //  *ptr = value at ptr 

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;

    // use for loop to print addresses of all array elements
    // using pointer notation
    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }

    return 0;
}

//----------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40};
    cout<<*arr<<endl; // --> arr[10];

    int *ptr = arr;

    for (int i = 0; i < 4; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }

    cout<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    return 0;
}