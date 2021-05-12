// FInd the maximum and minimum number in an array C++

#include <iostream>
#include <climits> //header file to use INT_MAX and INT_MIN.
using namespace std;

int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element No. "<<i+1<<": ";
        cin>>array[i];
    }

    // Method 1;
    // int max_No = array[0]
    // int min_No = array[0];

    //Method 2
    //For better approach use (INT_MIN) and (INT_MAX) like this :-
    int max_No = INT_MIN;
    int min_No = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        //Method 1 -
        // if (max_No < array[i])
        // {
        //     max_No = array[i];
        // }
        // if (min_No>array[i])
        // {
        //     min_No = array[i];
        // }

        // Method 2 -
        // max and min are the built in functions.
        max_No = max(max_No,array[i]);
        min_No = min(min_No,array[i]);
    }
    cout<<"The maximum number is "<<max_No<<endl;
    cout<<"The minimum number is "<<min_No<<endl;
    return 0;
}