//Pair vector in C++.

// Pair allows us to store pair element in the vector.

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declaring vector of pair.
    vector<pair <int,int> > v;

    // Initialising 1st and 2nd element of the pair with array values
    int arr[] = {10,20,30,40};
    int arr1[] = {1,2,3,4,};

    int n = sizeof(arr)/sizeof(arr[0]);

    //Entering the values in vector pair
    for (int i=0; i<n; i++)
        v.push_back( make_pair(arr[i],arr1[i]) );

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    

    cout<< "After sorting an array :"<<endl;
    sort(v.begin(),v.end());

    for (int i = 0; i < n; i++)
    {
        cout <<v[i].first << " "<< v[i].second<< endl; 
    }
}