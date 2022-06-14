#include<iostream>
using namespace std;

int maxi(int arr[],int n,int i){
if(i==n) return INT_MIN;


int ans=maxi(arr,n,i+1);
return max(ans,arr[i]);
}


int main(){


int arr[]={1,2,3,166,5,3,10,2};

int n=sizeof(arr)/sizeof(arr[0]);

int ans=maxi(arr,n,0);
cout<<ans;

    return 0;
}