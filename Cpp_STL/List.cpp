#include <iostream>
#include <list>
using namespace std;

int main(){
    list <int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    l.push_front(5);

    for(int i : l){
        cout << i << " ";
    }cout << endl;

    cout << "After erase : ";
    l.erase(l.begin());
    for(int i : l){
        cout << i << " ";
    }cout << endl;

    cout << "The size : " << l.size() << endl;

    list <int> a(l); // Coping the elements of lsit l in list a.
    cout << "Printing List a : ";
    for(int i : a){
        cout << i << " ";
    }cout << endl;

    list <int> b(5,100); // This list having 5 elements with same element 100.
    cout << "Printing List b : ";
    for(int i : b){
        cout << i << " ";
    }cout << endl;
}