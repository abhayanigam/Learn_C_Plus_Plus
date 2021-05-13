// Find maximum number of frequency of a char in  C++.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str = "dsfhsadjfh";
    char ch = 'd';
    int count = 0;
    for (int i = 0; i<str.size(); i++) {
        if (ch == str[i])
            count++;
    }
    cout<< count << endl;
    return 0;
}