#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long
#define ld long double

// unstable sorting algo
// TC O(nlogn) -- average and best case even with any random pivot
// TC O(nlogn) -- worst case (due to random pivot)
// Auxilliary space -- O(n) -- worst case && O(logn) -- avg. and best case FOR FUNCTION CALL STACK
// THE ARRAY IS NOT COPIED -- SO IN-PLACE


int partition(int a[], int l, int h)
{
	int i = l-1, j=h+1;

	// added random pivot element on the index-l and them executing the normal hoarse - partition
	
	srand(time(NULL));
    int r = l + rand() % (h - l);
    swap(a[r], a[l]);
	
	/////////////////////////////////////////////////////////////////////////////////////////////
	
	int pivot = a[l];
	while(true)
	{
		do
		{
			i++;
		}
		while(a[i]<pivot);
		do
		{
			j--;
		}
		while(a[j]>pivot);

		if (i>=j) return j; // index of j means all the elements smaller than pivot are in index l to j and 
							// greater or equal elements than pivot in index j+1 to h.

		swap(a[i], a[j]);
	}
}

void quickSort(int a[], int l, int h)
{
	if (l<h)
	{
		int pivot = partition(a, l, h);
		quickSort(a, l, pivot);
		quickSort(a, pivot+1, h);
	}
}


void solve()
{
	int n;
	cin >> n;
	int a[n];
	for (int i=0 ; i<n ; i++) cin >> a[i];

	quickSort(a, 0, n-1);

	for (int i=0 ; i<n ; i++) cout  << a[i] << " ";   
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	solve();
    return 0;
}