// Simple Calculator in C++

#include <iostream>
using namespace std;

int main()
{
    int Var_1 ,Var_2, result;
    cout<<"Enter the value for Var_2 : "; 
    cin>>Var_1;

    cout<<"Enter the value for Var_2 : "; 
    cin>>Var_2;

    char op;
    cout<<"Enter the operation : ";
    cin>>op;

    switch (op)
    {
    case '+':
        result = Var_1 + Var_2;
        cout<<result<<endl;
        break;

    case '-':
        result = Var_1 - Var_2;
        cout<<result<<endl;
        break;
    
    default:
        cout<<"operation invalid"<<endl;
        break;
    }

    return 0;
}