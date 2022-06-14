#include<iostream>
using namespace std;

void mergeSort(int arr[],int s,int e){
if(s>=e){
    return ;
} 
int mid=(s+e)/2;
mergeSort(arr,s,mid);
mergeSort(arr,mid+1,e);

int a=s;
int b=mid+1;



}

int main(){
  int arr[]={12,11,13,5,6,7};
  int n=6;
    mergeSort(arr,0,n-1);

    return 0;
}