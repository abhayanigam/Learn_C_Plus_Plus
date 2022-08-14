#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    // Appling Binary Search
    cout << "The Element is present or not : " << binary_search(v.begin(),v.end(),5) << endl; // Gives 0 means false.
    cout << "The Element is present or not : " << binary_search(v.begin(),v.end(),6) << endl; // Gives 1 means true.

    //Lower Bound
    cout << "Lower Bound : " << lower_bound(v.begin(),v.end(),6) - v.begin() << endl;
    //Upper Bound
    cout << "Upper Bound : " << upper_bound(v.begin(),v.end(),6) - v.begin() << endl;

    // Max and Min
    int a = 2, b = 3;
    cout << "Max : " << max(a,b) << endl;
    cout << "Min : " << min(a,b) << endl;

    // swap
    swap(a,b);
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    // Reverse a string
    string str = "Abhaya";
    reverse(str.begin(),str.end());
    cout << "String is : " << str << endl;

    // Rotate
    cout << "Before rotation : ";
    for(auto i : v){
        cout << i << " ";
    }cout << endl;

    rotate(v.begin(),v.begin()+1,v.end());
    
    cout << "After rotation : ";
    for(auto i : v){
        cout << i << " ";
    }cout << endl;

    // Sort:
    //     Sort function is based on intro sort
    //     which has 3 algo combinations (quick sort, heap sort and insertion sort)
    sort(v.begin(),v.end());
    cout << "After Sort: ";
    for(auto i : v){
        cout << i << " ";
    }cout << endl;
}