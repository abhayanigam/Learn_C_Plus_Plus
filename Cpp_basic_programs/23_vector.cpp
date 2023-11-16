//Vector and pair in C++.
/*
    Vector act like dynamic array we don't need to defined its size like array
    and we can add many element as we want.
*/

#include <iostream>
#include <algorithm>
#include <vector>  //--> header file to use vectors
using namespace std;

int main()
{
    // vector <datatype> name;
    vector <int> v;

    //To insert element in the vector.
    // push_back() adds element at the end of the vector.
    v.push_back(3);  
    v.push_back(2); 
    v.push_back(1);

    cout << v.begin();
    cout << v.end()-1;
    
    //To print the elements:
    cout << "Printing V values" << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    } 
    cout << endl;

    // Another way to iterate this vector using iterator
    // vector <datatype> :: iterator name;
    cout << "Using Iterator" << endl;
    vector <int>::iterator it;
    for(it = v.begin();it!=v.end();it++){
        // using (*it) because this is an pointer.
        cout << *it << " ";
    }
    cout << endl;

    // Another way to this by using auto
    // auto use to her to decide by it self which datatype this is to the compiler.
    cout << "Iterate using auto" << endl;
    for(auto element:v){
        cout << element << " ";
    }
    cout << endl;

    cout << "Reversing array " << endl;
    reverse(v.begin(),v.end());
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;

    // to pop an element from the vector we use pop_back to pop last element.
    v.pop_back(); // 3
    cout << "Printing V values after pop" << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    } 
    cout << endl;


    // To initialize a vector with size and specific element
    vector <int> v2 (3,50); // 3 is size and 50 is element which prints 3 times.

    //To swap v1 and v2 values
    swap(v,v2);
    cout << "Printing V2 values after swap" << endl;
    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    } 
    cout << endl;
    cout << "Printing V values after swap" << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    } 
    cout << endl;

    //Sort the vector;
    cout << "Sorting the Vector V" << endl;
    sort(v2.begin(),v2.end());
    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    } 
    cout << endl;
}

// Creating vector of arrays 
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Creating arrays
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};
    int array3[] = {7, 8, 9};

    // Creating a vector of pointers to arrays
    vector<int *> vectorOfArrays;

    vectorOfArrays.push_back(array1);
    vectorOfArrays.push_back(array2);
    vectorOfArrays.push_back(array3);

    cout << "The size of the vector of arrays is : " << vectorOfArrays.size() << endl;

    for (const auto &arr : vectorOfArrays)
    {
        for (size_t i = 0; i < 3; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

     // Creating vector of vectors
    vector<int> vector1 = {1, 2, 3};
    vector<int> vector2 = {4, 5, 6};
    vector<int> vector3 = {7, 8, 9};

    // Creating a vector of vectors
    vector<vector<int>> vectorOfVectors;

    // Pushing vectors into the vector of vectors
    vectorOfVectors.push_back(vector1);
    vectorOfVectors.push_back(vector2);
    vectorOfVectors.push_back(vector3);

    // Accessing elements of the vector of vectors
    for (const auto& vec : vectorOfVectors) {
        for (int value : vec) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
