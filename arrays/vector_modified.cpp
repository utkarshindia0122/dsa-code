#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    int n;
    cin >> n;
    // for input
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        v.push_back(m); 
    }
    // for output

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // sorting the vector
    sort(v.begin(), v.end()); 

    // output bt itrator
    vector<int>::iterator it;                 
    for (it = v.begin(); it != v.end(); it++) 
    {
        cout << *it << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(),greater<int>());// sort by decreasing order

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // swapping elements in vector

    swap(v[0], v[n - 1]);

    // output by auto
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;
    v.pop_back();
    for (auto element : v)
    {
        cout << element << " ";
    }
   cout<<endl;
    int search=18;
      it = find (v.begin(), v.end(), search);
    if (it != v.end())
    {
        cout << "Element " << search <<" found at position : " ;
       cout << it - v.begin() << " (counting from zero) \n" ;
    }
    else
        cout << "Element not found.\n\n";
    // 
cout << accumulate(v.begin(), v.end(), 0);;//add all the num from (i,j) from i to j

reverse(v.begin(), v.end());
for (int i = 0; i < v.size(); i++)
        {cout <<v[i] << " ";}// reverse a vector
    cout << endl;
    
cout<<v.front()<<" front element\n";
cout<<v.back()<<" end element"<<endl;
cout<<v.empty();//return bool if vector is empty or not
v.clear();  //or we can use v.erase();
     return 0;
}