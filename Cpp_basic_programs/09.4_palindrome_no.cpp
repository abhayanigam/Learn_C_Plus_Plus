//Palindrome of the number in C++ 

#include <iostream>
using namespace std;

int main()
{
    int rev=0,rmndr,t,n;
    cout<<"Enter the no :";
    cin>>n;
    t = n;
    while (n>0)
    {
        rmndr = n%10;
        rev = rev*10 + rmndr;
        n = n/10;
    }
    cout<<"the reverse of this no. is "<<rev<<endl;
    if (t==rev)
    {
        cout<<"the no. is palindrome "<<t<<endl;
    }
    else
    {
        cout<<"the no. is not a palindrome "<<t<<endl;
    }
}