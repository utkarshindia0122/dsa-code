#include<iostream>
using namespace std;
int add(int* arr,int size){
//base case 
if(size==0) return 0;

int sum=arr[0]+add(arr+1,size-1);
return sum;


}

int main(){
int arr[5]={3,2,8,1,6};
cout<<add(arr,5);
    return 0;
}