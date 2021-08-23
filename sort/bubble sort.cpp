#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long
#define ld long double

// sorts in theta(n^2) is worst case
// sort in thata(n) in best case i.e when array already sorted
// O(1) auxilliary space
// stable sorting algorithm


void bubbleSort(int a[], int n)
{
	for (int i=0 ; i<= n-2 ; i++)
	{ 
		bool swapped = false;
		for (int j=0 ; j<=n-2-i ; j++)
		{
			if (a[j] > a[j+1])
			{
				swap(a[j], a[j+1]);
				swapped = true;
			}
		}
		if (swapped == false) //means never swapped, so array is sorted now
		{
			break;
		}
	}
}


void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0 ; i<n ; i++)
    	cin >> a[i];

    bubbleSort(a, n);  

	 for (int i=0 ; i<n ; i++)
    	cout << a[i] << " " ;
  		
		  cout << endl;	    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) 
    solve();
    return 0;
}




