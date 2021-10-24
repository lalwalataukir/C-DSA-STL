#include <bits/stdc++.h>
using namespace std;
#define M 1000000007

// sieve of eratosthenos

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<bool> isPrime(n+1, true);
    for (int i=2 ; i<= n ; i++)
    {
        if (isPrime[i])
        {
            for (int j = i*i ; j<= n ; j = j+i)
            {
                isPrime[j]=  false;
            }
        }
    }

    for (int i = 2 ; i<= n ; i++)
    {
        if (isPrime[i])
            cout << i << " " ;
    }
    

    
}
