#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long

// FOR SORTED ARRAY
 
bool isPresent(vector<int> &a, int l, int r, int sum // O(n) time complexity
{
    while(l < r)
    {
    if (a[l] + a[r] == sum)
        return 1;
    else if (a[l] + a[r] > sum)
        {
            r--;
        }
    else 
    {
        l++;
    }
    }

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0 ; i<n ; i++) cin >> a[i]; // should be sorted

    int sum;
    cin >> sum;

    cout << isPresent(a, 0, n-1, sum);
}
