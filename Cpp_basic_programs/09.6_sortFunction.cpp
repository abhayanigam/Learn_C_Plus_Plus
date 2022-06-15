#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    /*It take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/
    sort(arr,arr+n);

    cout << "Array after sorting : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    cout << endl;

    //To Sort in desending order
    sort(arr, arr + n, greater<int>());

    cout << "Array after desending order sorting : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}