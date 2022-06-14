#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int i=0;
     int j=n-1;
int merge=0;
     while(i<j)
     {

         if(arr[i]==arr[j]){
             i++;
             j--;
         }

         if(arr[i]<arr[j]){
             arr[i+1]+=arr[i];
             i++;
             merge++;
         }
         if(arr[i]>arr[j]){
             arr[j-1]+=arr[j];
             j--;
             merge++;
         }
     }
     cout<<merge;
}