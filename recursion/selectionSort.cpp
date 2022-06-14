#include<iostream>
using namespace std;
void selectionSort(int *arr,int i,int j){
if(i==j) return ;

int min=i;
for(int k=i;k<=j;k++){
if(arr[k]<arr[min]){
    min=k;
}

}
if(min!=i){
    swap(arr[i],arr[min]);
}
selectionSort(arr,i+1,j);


}

int main(){
int arr[7]={2,1,-1,8,5,3,-9};
selectionSort(arr,0,6);

for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";

}
    return 0;
}