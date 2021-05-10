//Find the maximum number using if else.

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if (a>b)
    {
        if (a>c)
        {
            cout<<"A is greater : "<<a<<endl;
        }
        else{
            cout<<"C is greater : "<<c<<endl;
        }
    }
    else{
        if (b>c)
        {
            cout<<"B is greater : "<<b<<endl;
        }
        else{
            cout<<"C is greater : "<<c<<endl;
        }
    }
}