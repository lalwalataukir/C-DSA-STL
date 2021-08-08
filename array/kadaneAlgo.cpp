#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0 ; i<n ; i++) cin >> a[i];

    int curr_max = a[0];
    for (int i=1 ; i<n ; i++)
    {
        if (a[i] >= a[i] + a[i-1])
            curr_max = max(curr_max, a[i]);
        else
        {
            a[i] = a[i] + a[i-1];
            curr_max = max(curr_max, a[i]);
        }    
    }

    cout << curr_max << endl;

}
