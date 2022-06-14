#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int r = 1e6;
    int index[r];
    for (int i = 0; i < r; i++)
    {
        index[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        index[arr[i]]++;
    }

    cout << index[k];
    return 0;
}