//Check if a number is a prime number or not
//Prime number are the number that has a factor of prime numbers (Number itself and 1).

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number to check prime : ";
    cin>>num;
    int p = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            p++;
        }        
    }
    if (p == 2)
    {
        cout<<"This is a prime number"<<endl;
    }
    else{
        cout<<"This is not a prime number"<<endl;
    }
    return 0;
}

//----------------------------------------------------------------

//Method 2: 

#include <iostream>
using namespace std;

int main()
{
    int num,i;
    cout<<"Enter the number to check prime : ";
    cin>>num;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout<<"Non prime"<<endl;
            break;
        }        
    }
    if (i == num)
    {
        cout<<"This is a prime number"<<endl;
    }
    return 0;
}