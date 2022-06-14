#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }

    map<string,int> m;
    for(int i=0;i<n;i++){
        
        m[v[i]]++;
    }
for(auto &p:m){
    cout<<p.first<<" "<<p.second<<endl;

}
int mx=INT_MIN;
for(auto &p:m){
    if(mx<=p.second){
mx=p.second;
    }
    
}
cout<<mx;
return 0;

}