// Palindrome Word in C++

#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter the size of arr : ";
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i]){
            check = 0;
            break;
        }
    }
    if (check == true)
    {
        cout<<"The word is a palindrome \n";
    }
    else{
        cout<<"The word is not a palindrome \n";
    }

    // or

    // c=0
    // for ( i = 0; i < n/2; i++)
    // {
    //     if (a[i]==a[n-i-1])
    //     {
    //         c++;
    //     }
    // }
    // if (c==i)
    // {
    //     "Entered word is a palindrome"
    // }
    // else
    // {
    //     "Entered word is not a palindrome"
    // }

    return 0;
}