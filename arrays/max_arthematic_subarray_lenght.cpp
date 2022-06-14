#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<n;i++){
        cin>>arr[i];

    }

    int pd=(arr[1]-arr[0]);
    int curr=2,ans=2,j=2;
    while(j<n){
        if(pd==(arr[j]-arr[j-1])){
curr++;

        
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
ans=max(ans,curr);
        
        j++;
    }
    cout<<ans;
    return 0;
}