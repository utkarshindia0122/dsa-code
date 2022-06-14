#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char, int> m;//complex data types can't be used 
    //it insert element in o(1)
    //it stores in unordered from
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
       char ch;
        int j;
        cin >> ch >> j;
        m[ch] = j;
    }

    char chr;
    cin >> chr;
    auto it = m.find(chr);
    if (it != m.end())
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
char c=c;
    m.erase(c);
    for (auto &a : m)
    {
        cout << a.first << " " << a.second << endl;
    }
  
    for(auto it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<m.size()<<endl;//return size of map

cout<<m.empty()<<endl;//return bool map is empty or not
    m.clear();
    cout<<m.size()<<endl;

cout<<m.empty();
  return 0;
}