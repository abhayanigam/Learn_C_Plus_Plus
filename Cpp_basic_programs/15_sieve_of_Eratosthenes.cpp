// Sieve of eratosthenes in C++.
// It is used to prime numbers from a given range.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void primeSieve(int n){
    int prime[100] = {0};
    for (int i = 2; i <= n; i++) // we starting loop from 2 because 2 is the first prime number.
    {
        if (prime[i] == 0) // 0 = Marked
        {
            for (int j = i*i; j <=n ; j+=i)
            {
                prime[j] = 1; // 1 = Unmarked
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout<< i <<" ";
        }
    }cout<< endl;
}

int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;

    primeSieve(size);
    return 0;
}

//----------------------------------------------------------------

//Print the prime factorization using Sieve
// pseudo code :-
//                  spf[i] --> smallest prime factor of i.
//                  while (n != 1){
//                      print spf[n];
//                      n = n/spf[n];
//                  }
//examples : 20
//            20 ----> 10 ----> 5 ----> 1
//                 2        2       5      <---- Factors

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void primefactor(int n){
    int spf[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i*i; j <=n ; j+=i)
            {
                if (spf[j]== j)
                {
                    spf[j] = i;
                }
            }
        }
    }

    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;

    primefactor(size);
    return 0;
}