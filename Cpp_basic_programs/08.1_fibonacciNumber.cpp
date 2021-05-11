//Fibonacci Series in C++

#include <iostream>
using namespace std;

int main()
{
    int f=0,s=1,nxt,no;
    cout<<"Enter the No. to check fibonacci Number :";
    cin>>no;
    for (int i=0; i<no; i++) {
        if (i<=1) {
            nxt = i;
        }
        else{
            nxt = f+s;
            f=s;
            s = nxt;
        }
        cout<<nxt<<" ";
    }
    cout<<"\n";
}

//----------------------------------------------------------------
//Fibonacci Series using function in C++

#include <iostream>
using namespace std;

int fib(int n){
    if (n==1 || n==2){
        return 1;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}
int main(){
    int n,i;
    cout<<"Enter the number :";
    cin>>n;
    cout<<fib(n);
    
    //for printing all fibonacci numbers
    /*for (i=1; i<=n; i++) {
        cout<<fib(i);
    }*/
}