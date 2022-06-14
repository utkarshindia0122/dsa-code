#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int day[n];
    for (int i = 0; i < n; i++)
    {
        cin >> day[i];
    }
    int mx = INT_MIN, ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (day[i] > mx && day[i] > day[i + 1])
        {
            mx = max(mx, day[i]);

            ans++;
        }
    }
    cout<<ans;
    return 0;
}