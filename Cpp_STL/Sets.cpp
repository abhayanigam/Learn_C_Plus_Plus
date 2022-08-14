#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;

// time complexity of insert operation is O(log n)
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(6);

    cout << "After inserting elements in set : " ;
    for(int i : s){
        cout << i << " ";
    }cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it); // erasing 2nd element in the set (Which is index no. 1).

    cout << "After erasing element in set : " ;
    for(int i : s){
        cout << i << " ";
    }cout << endl;

    // Count function checks wether the element is in the set or not and return the boolean value.
    cout <<"5 is present or not : " << s.count(5) << endl;
    cout <<"-5 is present or not : " << s.count(-5) << endl;

    set<int>::iterator itr = s.find(5);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }cout << endl;
}