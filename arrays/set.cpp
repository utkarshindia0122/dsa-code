#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    int m;
    cin>>m;
    int a2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(a2[i]);
    }

    for (auto it = s.begin(); it != s.end(); it++)

    {
        cout << (*it) << " ";
    }
    // for (int value : s)
    // {
    //     cout << value << endl;
    // }
    return 0;
}