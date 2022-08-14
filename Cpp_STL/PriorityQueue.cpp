#include <iostream>
#include <queue>
using namespace std;

int main(){
    //Max heap 
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(4);

    cout << "Size of maxi : " << maxi.size() <<endl;

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }cout << endl;

    //Min heap
    priority_queue<int,vector<int>,greater<int>> mini;

    cout << "Size of mini : " << mini.size() <<endl;

    mini.push(2);
    mini.push(3);
    mini.push(1);
    mini.push(4);

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }cout << endl;

    cout << "Mini is empty is : " << mini.empty() << endl; 

}