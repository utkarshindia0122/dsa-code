#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<string, int> p;
    string str;
    int n;
    cin >> str;
    cin >> n;
    getline(cin, str);
    p.first = str;
    p.second = n;

    cout << p.first << " " << p.second<<endl;
    pair<string, int> p2;
    p2 = make_pair("hello", 5);

    cout << (p == p2) << endl;

    cout << (p < p2) << endl;
    cout << (p >= p2) << endl;
    cout << (p != p2) << endl;
    cout << (p <= p2) << endl;
}