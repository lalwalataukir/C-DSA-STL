#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long

void DNFsort(vector<int> &a)
{
    int n = a.size();
    int l=0, m=0, h=n-1;

    while(m<=h)
    {
        switch(a[m])
        {
            case 0:
            {
                swap(a[l], a[m]);
                l++;
                m++;
                break;
            }
            case 1:
            {
                m++;
                break;
            }
            case 2:
            {
                swap(a[h], a[m]);
                h--;
                break;
            }
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0 ; i<n ; i++) cin >> a[i];

    DNFsort(a);

    for (int i=0 ; i<n ; i++)
    {
        cout << a[i] << " "; 
    }
    
}