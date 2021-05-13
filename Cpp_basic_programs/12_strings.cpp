// Strings in C++  

// Difference between character array and strings

//    Character Array 		   -|-	        Strings

// 1. Need to know size			|	1. No need to Know size
// beforehand.					|	   beforehand.
//								|	
// 2. Large size required		|	2. Performing opeartion like
// for operations				|	   concatenation & append is easier.
// (concatenate or append).		|
//								|
// 3. No terminating extra		|	3. Terminated with a special
// character.					|      character '\O'.

// -------------------------------------------------------------------------

//Code -

#include <iostream>
#include <string> // Include this header file to perform string operations.
#include <algorithm> // Include this header file to perform sort function.

using namespace std;

int main()
{
    //user define strings
    string str;
    cout <<"Enter a string : ";
    cin>>str;
    cout << str <<endl;

    //To declare string of specific size.
    string str1(5,'n');
    cout<<str1<<endl; // ----> nnnnn

    // string str;
    getline(cin,str);  // getline store the whole sentence.
    cout<<str<<endl;

    //Different functions of Strings
    string s1 = "Fam";
    string s2 = "ily";
    cout<< s1.append(s2) << endl;
        //or
    cout<<s1+s2<<endl;

    // To find char in string;
    cout<<s1[1]<<endl;

    // To clear a string;
    string abc = "gnfdhflskdsdf";
    abc.clear();
    cout<< abc << endl;

    // To find which string is greater.
    string str1 = "abc";
    string str2 = "xyz";
    string str3 = "abc";
    cout << str2.compare(str1) << endl; // --> 23

    //To print strings are equal aur not.
    if (str1.compare(str3) == 0)
    // or to make it simple.
    // if (!str1.compare(str3))
    {
        cout << "String are equal." << endl;
    }

    //To check my string is empty or not.
    string s1 = "abc";
    cout << s1 << endl;
    s1.clear();
    if (s1.empty())
    {
        cout<< "String is empty"<< endl;
    }

    // To erase a word in a string
    string s1 = "nincompoop";
    s1.erase(3,2); // 3 is the index where we start to delete and 2 is the number of characters.
    cout<< s1 << endl;

    //To find a string in the given string.
    //indexes -  12345678910
    string s1 = "nincompoop";
    cout<<s1.find("com")<<endl; //-->3

    //To insert a string in between a string.
    string s1 = "nincompoop";
    cout<< s1.insert(2,"lol") << endl;

    // To find out the size of the string.
    string s1 = "nincompoop";
    cout<< s1.size() << endl;
    cout<< s1.length() << endl;
    for (int i = 0; i < s1.length(); i++)
    {
        cout<< s1[i] << " ";
    }

    // To get a substring of a string
    string s1 = "nincompoop";
    string s = s1.substr(6,4); //6 is the index where we start iterations and 3 is the number of characters.
    cout<< s << endl;

    // To convert a string into a number or a integer.
    string s1 = "420";
    int x = stoi(s1);
    cout<<x<<endl;
    cout<<x+2<<endl;

    // To convert int to string.
    int x = 420;
    string s1 = to_string(x);
    string s2 = " done";
    cout<<s1.append(s2)<<endl;

    // To sort a string
    string s1 = "sdflhjeoirusabzc";
    sort(s1.begin(), s1.end());
    cout<<s1<<endl;

    return 0;
}