#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int mx=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){

sum+=arr[j];
if(sum>=mx){
    mx=sum;
}
        }
    }

    cout<<mx;
    return 0;
}


// time compexity o(n^2)

//best is kadane's algorithm  (v.v.v.v.imp)