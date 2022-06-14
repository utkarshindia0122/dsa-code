#include<iostream>
using namespace std;
void BubbleSort(int *arr,int n){
if(n==1||n==0) return ;

for(int i=0;i<n-1;i++){
if(arr[i]>=arr[i+1]){
    swap(arr[i],arr[i+1]);
}
}
BubbleSort(arr,n-1);
return;

}

int main(){
int arr[7]={2,1,-1,8,5,3,-9};
BubbleSort(arr,7);

for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";

}
    return 0;
}