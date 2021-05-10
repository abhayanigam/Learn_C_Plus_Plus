// INTRODUCTION :-

// #include is the preprocessor directives used to include the files Like C lang
// <iostream> is the header file for taking input and printing output.
//int main() is the execution of the code begind from main function(Mandatory for any program)
//std::cout is used to display output in quotation marks. (we can also use using namespace std; ) like line No. 12 and 27.
//return 0; is the execution of a function.
// (;) Marks the end of a statement.
// {} curly brace indicate the start and end of a function.
// Imp :-
//      (>>) is the extraction operator
//      (<<) is the insertion operator

#include <iostream>
using namespace std;

int main(){
    // insert code here...
    cout << "Hello, World!"<<endl;
    return 0;
}

// ----------------------------------------------------------------
//  Method 2:-

#include <iostream>

int main(){
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

// Note :
//     <<endl; is equal to "\n"