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

        int sum = 0;
        int maxi = a[0];
        
        for (int i=0 ; i< n; i++)
        {
            sum = sum + nums[i];
            if (sum > maxi)
                maxi = sum;
            if (sum < 0)
                sum=0;
        }
        cout << maxi << endl;
    
}
