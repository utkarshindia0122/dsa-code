#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        int j;
        cin>>str>>j;
        
        m[str]=j;

       
    }
string s;
cin>>s;
    auto it=m.find(s);
    if(it!=m.end()){
    cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    m.erase(s);
    for(auto &a :m){
        cout<<a.first<<" "<<a.second<<endl;
    }
    
return 0;
}