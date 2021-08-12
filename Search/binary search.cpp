#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long

// Use Iterative as it takes constant extra space

//RECURSIVE APPROACH // TC : O(logN) AS : O(logN)
 
// int binary_search(vector<int> a, int left, int right, int key)
// {
//         if (left > right) return -1;

//         int mid = left + (right - left) / 2;

//         if (a[mid] == key)
//         {
//             return mid;
//         }
//         else if (a[mid] > key)
//         {
//             right = mid - 1;
//             return binary_search(a, left, right, key);
//         }
//         else 
//         {
//             left = mid + 1;
//             return binary_search(a, left, right, key);
//         }

// }


// ITERATIVE APPROACH // TC : O(logN) AS : O(1) 

int binary_search(vector<int> a, int left, int right, int key)
{
    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            right = mid - 1;

        }
        else 
        {
            left = mid + 1;

        }
    }
    return -1;
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n); // sorted
    for (int i=0 ; i<n ; i++) cin >> a[i];
    int x;
    cin >> x;


    cout << binary_search(a, 0, n - 1, x);

}