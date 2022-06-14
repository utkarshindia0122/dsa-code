#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a1[n],a2[n];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<n;i++){
        cin>>a2[i];
    }

    if(n%2==0){
        int mid=n/2;
        float avg1,avg2;
        avg1=(a1[mid-1]+a1[mid])/2.0;
        avg2=(a2[mid-1]+a2[mid])/2.0;

        cout<<(avg1+avg2)/2.0;
        return 0;
    }
    else{
        int mid=n/2;
        cout<<(a1[mid]+a2[mid])/2.0;
        
    }

    return 0;
}