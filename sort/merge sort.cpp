#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long
#define ld long double

// theta(nlog(n)) time complexity
// O(n) auxilliary space
// stable sorting algo

void merge(int a[], int low, int mid, int high)
{
	int n_left = mid - low + 1;
	int n_right = high - (mid+1) +1;
	int left[n_left];
	int right[n_right];

	for (int i=low ; i<= mid ; i++)
	{
		left[i-low] = a[i];
	}
	for (int i=mid+1 ; i<= high ; i++)
	{
		right[i-(mid+1)] = a[i];
	}



	int p_left = 0, p_right = 0, ct=low;

 	while(p_left <= n_left-1 && p_right <= n_right-1)
 	{
 		if (left[p_left] <= right[p_right])
 		{
 			a[ct] = left[p_left];
 			ct++;
 			p_left++;
 		}
 		else if (right[p_right] < left[p_left])
 		{
 			a[ct] = right[p_right];
 			ct++;
 			p_right++;
 		}

 	}

 	if (p_left==n_left || p_right==n_right)
 	{
 		if (p_left == n_left)
 		{
 			while(p_right <= n_right-1)
 			{
 				a[ct] = right[p_right];
 				p_right++;
 				ct++;
 			}
 		}
 		else if (p_right==n_right)
 		{
 			while(p_left <= n_left-1)
 			{
 				a[ct] = left[p_left];
 				p_left++;
 				ct++;
 			}
 		}
 	}




}


void mergeSort(int a[], int low, high)
{
	while(high > low)
	{
		int mid = low + (high-low)/2;

		mergeSort(a, low, mid);
		mergeSort(a, mid+1, high);
		merge(a, low, mid, high);

	}	
}


void solve()
{
 	int n;
 	cin >> n;
 	int a[n];
 	for (int i=0 ; i<n ; i++) cin >> a[i];

 	mergeSort(a, 0, n-1);

 	for (int i=0 ; i<n ; i++) cout << a[i] << " ";     
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}