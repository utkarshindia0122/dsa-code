#include<iostream>
using namespace std;


int power(int n,int m){
    if(n==0) return 1;

    int temp=power(n/2,m);
    int ans=0;
    if(n%2==0){
        ans=temp*temp;
    }
    else{
        ans=temp*temp*m;
    }
    return ans;
}


int main(){

int n,m;
cin>>n>>m;

int ans=power(n,m);
            //m^n;
cout<<ans;
    return 0;
}