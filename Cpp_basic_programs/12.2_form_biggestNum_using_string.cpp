//Form the biggest number from the numeric string C++.
//Example -  "53214" --> "54321"

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str = "53214";

    // To sort this in descending order.
    sort(str.begin(), str.end(), greater<int>()); //or greater<char>()

    cout<<str<<endl;

    return 0;
}