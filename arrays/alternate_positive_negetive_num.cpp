#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> pos;

    vector<int> neg;
    int j = 0, k = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }
    j = 0;
    k = 0;

    for (int i = 0; i < n; i += 2)
    {
        if (!neg.empty())
        {
            arr[i ] = neg[k];
            neg.pop_back();
            k++;
        }
        if (!pos.empty())
        {
            arr[i+1] = pos[j];
            pos.pop_back();
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}