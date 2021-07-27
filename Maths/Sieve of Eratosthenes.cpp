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
    vector<bool> v(n+1, true);
    for (int i=2 ; i<= sqrt(n) ; i++)
    {
        if (v[i])
        {
            for (int j = i*i ; j<= n ; j = j+i)
            {
                v[j]=  false;
            }
        }
    }

    for (int i = 2 ; i<= n ; i++)
    {
        if (v[i])
            cout << i << " " ;
    }
    

    
}