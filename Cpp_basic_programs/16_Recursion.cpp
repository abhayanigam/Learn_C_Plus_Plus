// Recursion in C++.

//Sum of n-1.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int sum(int n){
    if (n == 0)
    {
        return 0;
    }
    else{
        int ans = sum(n-1);
        return n + ans;
    }
}

int main()
{
    int size;
    cin >> size;
    cout << sum(size) << endl;
    return 0;
}

//----------------------------------------------------------------

//Calculate n raised to power of p.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int power(int n, int p){
    if(p == 0){
        return 1;
    }
    int prevPower = power(n, p-1);
    return n*prevPower;
}

int main()
{
    int n,p;
    cin >> n >> p;
    cout << power(n,p) << endl;
    return 0;
}