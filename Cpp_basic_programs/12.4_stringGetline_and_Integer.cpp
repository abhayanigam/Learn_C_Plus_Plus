#include <iostream>
using namespace std;

int main()
{
    // To converting string into a number or a integer.
    /*
        Method 1:
            s  to  i()
            |  |   |___> integer
            |  |_______> to
            |__________> String 
    */
    string s = "123";
    int x = stoi(s);
    cout << x << endl;

    /*
        Method 2: 
            a   to   i
            |   |    |____> integer 
            |   |_________> to
            |_____________> Argument    
    */
    const char* str1 = "42";
    // string str1 = "42"; --> gives error
    int num1 = atoi(str1); // explicit type casting
    cout<< num1 << endl;

    //Method 3:
    string str = "12345"; // converting string to integer
    int num = stoll(str); // string to long long int 
    cout << num << endl;

    // To convert int to string.
    int y = 420;
    string s1 = to_string(y);
    string s2 = " done";
    cout<<s1.append(s2)<<endl;

    /*
        1.cin.get()
            char str[100];
            cout << "Enter a string: ";
            cin.get(str, 100);

        2. getline(cin, str):

        Note:   
            Instead of using cin>> or cin.get() function, 
            you can get the entered line of text using getline().
            getline() function takes the input stream as the first parameter 
            which is cin and str as the location of the line to be stored.
    */

    // string using string data type
    string str2;
    cout << "Enter a string: ";
    getline(cin, str2);

    cout << "You entered: " << str2 << endl;
}