#include <iostream>
using namespace std;
void insertionSort(int *arr, int i, int j)
{
if(i==j+1) return;
int temp=arr[i+1];
int k=i-1;
while(k>=0&&arr[k]>temp){
    arr[k+1]=arr[k];
    k--;
}
arr[k+1]=temp;
insertionSort(arr,i+1,j);

}


int main()
{
    int arr[7] = {2, 1, -1, 8, 5, 3, -9};
    insertionSort(arr, 0, 6);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}