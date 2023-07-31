#include <iostream>
#include <boost/algorithm/string.hpp>
using namespace std;
using namespace boost::algorithm;

// Driver Code
int main()
{
    // Given Input
    string s1 = " Abhaya ";
    string s2 = "Abhaya ";
    string s2 = " Abhaya ";

    // Apply Left Trim on string, s1
    cout << "The original string is: \""
         << s1 << "\" \n";
    trim_left(s1);
    cout << "Applied left trim: \""
         << s1 << "\" \n\n";

    // Apply Right Trim on string, s2
    cout << "The original string is: \""
         << s2 << "\" \n";
    trim_right(s2);
    cout << "Applied right trim: \""
         << s2 << "\" \n\n";

    // Apply Trim on string, s3
    cout << "The original string is: \""
         << s3 << "\" \n";
    trim(s3);
    cout << "Applied trim: \"" << s3
         << "\" \n";

    return 0;
}
