#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long
#define ld long double

// sorts in theta(n^2) is every case

// O(1) auxilliary space
// unstable sorting algorithm

int min_i(int a[], int n, int start, int end)
{
	int mini = start;
	for (int i= start ; i<= end ; i++)
	{
		if (a[i] < a[mini])
			mini = i;
	}

	return mini;
}

void selectionSort(int a[], int n)
{
	for (int start = 0 ; i <= n-2 ; i++)
	{
		int mini=  min_i(a, n, start, n-1);
		swap(mini, a[start]);
	}
}

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0 ; i<n ; i++) cin >> a[i];

    selectionSort(a, n);

    for (int i=0 ; i<n ; i++) cout << a[i];

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //int t;
    //cin >> t;
    //while(t--) 
    solve();
    return 0;
}