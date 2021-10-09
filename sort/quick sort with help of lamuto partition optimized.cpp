#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long
#define ld long double

// unstable sorting algo
// TC O(nlogn) -- average and best case even with any random pivot
// TC O(n^2) -- worst case
// Auxilliary space -- O(n) -- worst case && O(logn) -- avg. and best case FOR FUNCTION CALL STACK
// THE ARRAY IS NOT COPIED -- SO IN-PLACE

int partition(int a[], int l, int h)
{
    // added random pivot element on the index-l and them executing the normal hoarse - partition
    
    srand(time(NULL));
    int r = l + rand() % (h - l);
    swap(a[r], a[h]);
    
    /////////////////////////////////////////////////////////////////////////////////////////////
    
    int p = a[h];
    int window = l-1;

    for (int i=l ; i<= h-1 ; i++)
    {
        if (a[i] < p)
        {
            window++;
            swap(a[window], a[i]);
        }
    }
    
    swap(a[window+1], p);
    return (window+1);

}



void quickSort(int a[], int l, int h)
{
    if(l<h)
    {
        int pivot = partition(a, l, h);
        quickSort(a, l, pivot-1);
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

    for (int i=0 ; i<n ; i++)
        cout << a[i] << " ";

    


}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}