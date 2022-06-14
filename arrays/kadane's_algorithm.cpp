#include <bits/stdc++.h>
using namespace std;

int kd(int arr, int);

int kd(int arr[], int n)
{
    int current_sum = 0;
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        current_sum = current_sum + arr[i];
        if (current_sum >= max_sum)
        {
            max_sum = current_sum;
        }
        if (current_sum < 0)
        {
            current_sum = 0;
        }
        
    }return max_sum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << kd(arr, n);

    return 0;
}