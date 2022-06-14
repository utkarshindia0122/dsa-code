#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

    // binary search// searching the key and try to bound that in low and high;

    int l = 0;
    int h = 1;
    while (k > arr[h])
    {
        l = h;
        h = h * 2;
    }

    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == k)
        {
            cout << mid;
            return 0;
        }
        else if (arr[mid] > k)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    return 0;
}