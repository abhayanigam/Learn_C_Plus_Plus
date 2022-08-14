/*
    Map is the datastructure whichh stores data in the form of key value pairs.
    All the key will be unique and one key points only one value.
*/

#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,string> m;

    // Method 1:
    m[1] = "Blacky";
    m[3] = "Macy";
    m[2] = "ipad";

    // Method 2:
    m.insert({4,"Moto edge20"});

    cout << "Before Erase : " << endl;
    for(auto i : m){
        cout << i.first << " : " << i.second << endl;
    }
    // in case of map the key will be print in a sorted order.
    // if we use unorder map it will be print in unsorted order (And unorder map's implementation is down under hash table)

    cout << "Finding 3 : " << m.count(3) << endl;

    m.erase(4);

    cout << "After erase : " << endl;
    for(auto i : m){
        cout << i.first << " : " << i.second << endl;
    }

    auto it = m.find(2);

    for (auto i = it; i!= m.end(); i++)
    {
        cout << (*i).first << endl;
    }cout << endl;
    
}