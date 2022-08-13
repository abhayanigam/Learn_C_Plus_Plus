#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> q;

    q.push_back(1);
    q.push_front(2);

    // q.pop_front();

    cout << "Printing q : ";
    for(int i : q){
        cout << i << " ";
    }cout << endl;

    cout << "Element at index 1 : " << q.at(1) << endl;

    cout << "Front : " << q.front() << endl;
    cout << "End : " << q.back() << endl;

    cout << "Empty or not : " << q.empty() << endl;

    cout << "Before erase : " << q.size() << endl;

    q.erase(q.begin(),q.begin()+1); // erase function supports range from where to where you wanna delete

    cout << "After erase : " << q.size() << endl;

}