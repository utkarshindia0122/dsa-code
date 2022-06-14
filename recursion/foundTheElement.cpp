#include<iostream>
using namespace std;
bool found(int* arr,int size,int key){
if(size==0) return false;

if(arr[0]==key) return true;
else return found(arr+1,size-1,key);

}

int main(){
int arr[5]={3,5,1,2,6};
cout<<found(arr,5,2);
    return 0;
}