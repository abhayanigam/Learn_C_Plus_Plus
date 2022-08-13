#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;
    
    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;

    cout << "Size -> " << v.size() << endl;

    cout << "Element at 2nd index : " << v.at(2) << endl;

    cout << "Front : " << v.front() <<endl;
    cout << "End : " << v.back() << endl;

    cout << "Before Pop : ";
    for(auto i : v){
        cout << i << " ";
    }cout << endl;

    v.pop_back();

    cout << "After pop : ";
    for(auto i : v){
        cout << i << " ";
    }cout << endl;

    // Note : If we use clear function in vector then size of the vector will 
    //         get zero but the capacity(How much memory is assigned) will remain the same. 

    cout << "Before clear the size : " << v.size() << endl;
    cout << "Before clear the capacity : " << v.capacity() << endl;
    
    v.clear();

    cout << "After clear the size : " << v.size() << endl;
    cout << "After clear the capacity : " << v.capacity() << endl;

    vector <int> a(5,1); // This vector has 5 elements size with same element 1.
    cout << "Print a : ";
    for(int i : a){
        cout << i << " ";
    }cout << endl;

    //Coping elements of a in b
    vector<int> b(a);
    cout << "Print b : ";
    for(int i : b){
        cout << i << " ";
    }cout << endl;

    
}