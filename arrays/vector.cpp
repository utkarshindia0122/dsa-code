#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    int n;
    cin >> n;
    //for input
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        v.push_back(m);
    }
    //for output

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    //sorting the vector
    sort(v.begin(), v.end());

//output bt itrator
vector<int>::iterator it;
    for (it=v.begin();it!=v.end();it++)

    {
        cout << *it << " ";
    }
cout<<endl;
//swapping elements in vector

swap(v[0],v[n-1]);

//output by auto
for(auto element:v){
    cout<<element<<" ";
}
cout<<endl;
 v.pop_back();
 for(auto element:v){
     cout<<element<< " ";
 }
    return 0;
}