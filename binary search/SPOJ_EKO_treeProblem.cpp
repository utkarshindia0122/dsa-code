#include <iostream>
#include<vector>
#define int long long int
using namespace std;
bool check(int* arr, int n, int m, int cut)
{
    int totalwood = 0;
    for (int i = 0; i < n; i++)
    {
        int wood = 0;
        if (arr[i] > cut)
        {
            wood = arr[i] - cut;
        }
        totalwood += wood;
    }
    if (totalwood >= m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int solve( int *arr, int n, int m)
{
    int maxi=-1;
    for(int i=0;i<n;i++){
    	maxi=max(maxi,arr[i]);
    }
    
    int s = 0;
    int e = maxi;
    int mid = s + (e-s) / 2;
    int ans = -1;
    while (s <= e)
    {
        mid = s + (e-s) / 2;
        if (check(arr, n, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int32_t main()
{

    int n;
    int m;
    cin >> n >> m;
    int *arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = solve(arr, n, m);
    cout <<ans<<endl;
    delete arr;

    return 0;
}