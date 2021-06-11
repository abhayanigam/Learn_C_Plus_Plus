// Set and Multiset in C++
/*
    Set :
        1. Ordered
        2. Unordered

    Order Set:
        - Contain unique elements.
        - Implemented using balanced binary search tree.
        - Elements are in sorted order.
        - Random access is not possible, i.e you cannot get i'th element in O(1)/O(Log N).
        - Present in (#include <set>) header file.
*/

//Insertion and Print

#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);

    cout << "1st method to print set" << endl;
    for ( auto i : s)
    {
        cout << i << " ";
    }
    cout << "\n";

    cout << "2nd method to print set" << endl;
    for (auto i = s.begin(); i !=s.end(); i++){
        cout << *i << " ";
    }
    cout << "\n";

    cout << "1st method to print in reverse set" << endl;
    for (auto i = s.rbegin(); i !=s.rend(); i++){
        cout << *i << " ";
    }
    cout << "\n";

    cout << "After Erasing a set " << endl;
    s.erase(2);
    s.erase(s.begin());
    for ( auto i : s)
    {
        cout << i << " ";
    }
    cout << "\n";

    cout << "The size of the set is " << s.size() << "\n";

    set<int, greater<int>> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);

    cout << "2nd method to print in descending order" << endl;
    for ( auto i : s1)
    {
        cout << i << " ";
    }
    cout << "\n";

//-------------------------------------------------------------------------------------------

    //Lower and upper bound()

    cout << "Lower and upper bound"<< endl;
    set<int> s3;
    s3.insert(1);
    s3.insert(3);
    s3.insert(5);

    cout << *s3.lower_bound(2) << " ";
    cout << *s3.lower_bound(3) << " ";
    cout << *s3.upper_bound(3) << " ";
    cout << (s3.upper_bound(5) == s3.end())<< endl;

}