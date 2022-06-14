#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
unordered_map<char,int> map;
int n=s.size();
for(int i=0;i<n;i++){
    map[s[i]]++;
}

for(auto it=map.begin();it!=map.end();it++){
    if((*it).second>=2){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
return 0;
}