#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    int i=0;
    int j=n-1;

    while(i<j){
        while(arr[i]>=0&&i<n){
            i++;
        }
        while(arr[j]<0&&j>=0){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }

    }

    j=0;
    while(j<n&&i<n){
        swap(arr[j],arr[i]);
        i++;
        j+=2;
    }
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}