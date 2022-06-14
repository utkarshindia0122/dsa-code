#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    unordered_map<int, int> map;
    set<int> set;

    for (int j = 0; j < n; j++)
    {
        set.clear();
        for (int i = 0; i < m; i++)
        {
            set.insert(arr[i][j]);
        }
        for (auto it = set.begin(); it != set.end(); it++)
        {

            map[(*it)]++;
        }
    }
    for (auto it = map.begin(); it != map.end(); it++)
    {
        if ((*it).second >= n)
        {
            cout << (*it).first << " ";
        }
    }
    return 0;
}