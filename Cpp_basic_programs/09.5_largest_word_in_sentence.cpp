//Find largest word in a sentence.

#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    cout<<"Enter the size : ";
    cin >> size;

    cin.ignore(); // ignore is imp. for getline to clear the buffer.

    char arr[size + 1];
    cin.getline(arr,size); // getline stores the whole string.

    cin.ignore(); // ignore is imp. for getline to clear the buffer.

    int currentLen = 0, maxlen = 0, i = 0 , st = 0, maxst = 0;

    while (1) // 1 = true
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currentLen > maxlen)
            {
                maxlen = currentLen;
                maxst = st;
            }
            currentLen = 0;
            st = i+1;
        }
        else
            currentLen++;

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;

    for ( i = 0; i < maxlen; i++)
    {
        cout<<arr[i+maxst];
    }
    
    return 0;
}