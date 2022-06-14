#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
    int l;
    int r;
    cin>>a>>b>>l>>r;
    int mask=1;
    l=l-1;
    r=r-1;
    mask=mask<<(r-l+1);
    mask=mask-1;
    mask=mask<<(l-1);
    a=a&mask;
    b=a|b;
    cout<<b;
    
    return 0;

}