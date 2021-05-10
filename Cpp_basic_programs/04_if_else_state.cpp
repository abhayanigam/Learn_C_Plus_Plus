//If else in C++

#include <iostream>
using namespace std;

int main(){
    int saving;
    cout<<"Enter the amount:- ";
    cin>>saving;

    if (saving>5000)
    {
        cout<<"Too high"<<endl;
    }
    else if(saving>2000){
        cout<<"In Mid"<<endl;
    }
    else{
        cout<<"Too low"<<endl;
    }
}