#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Abhaya");
    q.push("Nigam");

    cout << "The size of the queue is : " << q.size() << endl;

    cout << "Before pop the first element is : " << q.front() << endl;

    q.pop();

    cout << "After pop the first element is : " << q.front() << endl;

    cout << "The size of the queue is : " << q.size() << endl;
}