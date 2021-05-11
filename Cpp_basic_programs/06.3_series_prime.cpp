// Print all prime numbers in a given range.

#include <iostream>
using namespace std;

int main()
{
    int p,n,i;
    cout<<"Enter the number : ";
    cin>>p;

    for ( n = 0; n <= p; n++ )
    {
        for (i = 2; i < n; i++)
        {
            if(n%i == 0){
                break;
            }
        }
        if (i == n)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}