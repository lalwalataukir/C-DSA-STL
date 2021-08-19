#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long
#define ld long double

// theta(n) in best case --> when array is already sorted
// theta(n^2) in worst case --> when array is reverse sorted                in general O(n^2)
// O(1) auxillary space
// stable sorting algo

void insertionSort(int a[], int n)
{
    for (int i=1 ; i<n ; i++)
    {
        int key = a[i];
        int j= i-1;
        while(j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0 ; i<n ; i++) cin >> a[i];

    insertionSort(a, n);

    for (int i=0 ; i<n ; i++) cin << a[i] << " ";

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while(t--) 
     solve();
    return 0;
}