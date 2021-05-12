//Implimentation of Array in C++

#include <iostream>
using namespace std;

int main(){
    int array[4] = {1,2,3,4};

    for (int i = 0; i < 4; i++)
    {
        cout<<array[i]<<" "; 
    }
    cout<<endl;
}

//------------------------------

//User define array in C++

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element No. "<<i+1<<": ";
        cin>>array[i];
    }

    cout<<"Entered Elements in the array ."<<endl;

    for (int i = 0; i < size; i++)
    {
        cout << array[i]<<" ";
    }    
    return 0;
}