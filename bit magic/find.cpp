#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2;
    cin>>s;
cin>>s2;
    
    string temp;
    temp=s+s;
    if(s.size()!=s2.size()){
        cout<<"false ";
        return 0;
    }
if(temp.find(s2)!=string::npos){
    cout<<"True";
}
else{
    cout<<"False";
}


    return 0;
}