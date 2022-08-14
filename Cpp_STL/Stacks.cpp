#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Abhaya");
    s.push("Nigam");

    cout << "Before pop top element is : " << s.top() << endl;

    s.pop();

    cout << "After pop top element is : " << s.top() << endl;

    cout << "Size of the stack is : " << s.size() << endl;

    cout << "Empty or not : " << s.empty() << endl;
}