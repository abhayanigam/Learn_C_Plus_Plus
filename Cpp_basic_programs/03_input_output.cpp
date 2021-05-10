//Input output in C++

//(cin>>VariableName;) is use to store value of a variable just like c (scanf("%d");)

#include <iostream>
using namespace std;

int main(){
    int Var_1;
    cout<<"Enter the number for Var 1:- ";
    cin>>Var_1;

    // or cin >>Var_1;

    int Var_2;

    cout<<"Enter the value for Var 2 :- ";cin >>Var_2;

    int sum = Var_1 + Var_2;
    cout <<"sum of var 1 and var 2 :- "<<sum<<endl;

    //To print only ans write like this :
    cout <<sum<<endl;
}