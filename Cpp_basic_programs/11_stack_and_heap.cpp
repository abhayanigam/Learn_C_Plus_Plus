// Stacks and Heap in C++

//Difference
// Stack has fixed memory size and it also deallocate the memory to.
// Heap does not have fixed size.

#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int *p = new int();  //new operator used to allocate memory in heap.
    // Also prefer 10.2_memory_management file.

    *p = 10; // 

    cout<<*p<<endl;

    delete(p); // Delete operator used to deallocate memory.

    p = new int[4]; // suppose we want to store an array.

    delete[]p;

    cout <<*p<<endl;

    p = NULL;
    return 0;
}