#include<iostream>
using namespace std;
bool search(int* arr,int size,int key){
    if(size==0) return 0;
    int mid=(0+size)/2;
    if(arr[mid]==key) return 1;
    else if(arr[mid]<key){
        return search(arr+mid+1,size-mid,key);

    }
    else{
        return search(arr,size-mid-1,key);
    }
}

int main(){
int arr[11]={2,4,6,10,14,18,22,38,49,55,222};
cout<<search(arr,11,222);
    return 0;
}