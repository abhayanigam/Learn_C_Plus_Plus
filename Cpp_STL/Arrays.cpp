#include <iostream>
#include <array> // Using this library too use the array function in STL
using namespace std;

int main(){
    //The noramal way to define an array.
    int arr[4] = {1,2,3};

    //STL method to implement array
    //the implementation of array STL happens with the fixed sized static array just like above.
    array<int,4> a = {1,2,3,4};
    
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }cout << endl;

    //To access the specific index in an array stl
    cout << "Element at 2nd Index : "<< a.at(2) << endl;
    
    cout << "Empty or not : "<< a.empty() << endl;

    cout << "First Element : " << a.front() << endl;
    cout << "Last Element : " << a.back() << endl;
}