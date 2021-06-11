//Pair vector in C++.

// Pair allows us to store pair element in the vector.

#include <iostream>
#include <vector>
using namespace std;

bool myCompare(pair <int,int > p1, pair <int, int> p2){
    return (p1.first<p2.first);
}

int main()
{
    // //Initializing pair vector 
    // pair <int,char> p;
    // p.first = 3;
    // p.second = 'f';

//----------------------------------------------------------------

    int arr[] = {10,16,7,14,5,3,2,9};
    vector < pair<int,int > > v;

    for(int i = 0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        // Now making a pair of every element with its index.

        // // 1st method :
        // pair<int, int> p;
        // p.first = arr[i];
        // p.second = i;

        //2nd method : (The direct method).
        v.push_back(make_pair(arr[i],i));
    }

    sort(v.begin(),v.end(),myCompare);
    for(int i=0;i<v.size();i++){
        arr[v[i].second] = i;
    }

    for(int i=0;i<v.size();i++){
        cout << arr[i]<< " ";
    }

    cout << endl;
}