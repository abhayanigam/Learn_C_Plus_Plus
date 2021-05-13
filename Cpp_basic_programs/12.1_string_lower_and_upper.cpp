//Convert string into upper and lower case in C++

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str = "abcdefghijkl";

    //Checking the ascii value first
    cout<< 'a' - 'A' <<endl; // --> 32;

    //convert into upper case
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout<< str << endl;

    //convert into lower case
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    cout<< str << endl;
    
    return 0;
}

//----------------------------------------------------------------

// Performing same program with inbuilt functions.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str = "abcdefghijkl";

    //convert into upper case
    transform(str.begin(), str.end(),str.begin(), ::toupper);
    //str.begin(), str.end(),str.begin(), ::toupper) (1st begin and end is used to give string for operation and 2nd begin is tell that where to start the string and ::toupper is used to change in upper case)
    cout<< str << endl;

    //convert into lower case

    transform(str.begin(), str.end(),str.begin(), ::tolower);
    //str.begin(), str.end(),str.begin(), ::toupper) (1st begin and end is used to give string for operation and 2nd begin is tell that where to start the string and ::toupper is used to change in upper case)
    cout<< str << endl;
    
    return 0;
}