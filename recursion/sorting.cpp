#include <iostream>
using namespace std;
void insert(int *arr, int n, int a)
{ // insert a at its correct position
    if (n == 0)
    {
        arr[0] = a;
        return;
    }
    if (arr[n - 1] < a)
    {
        arr[n] = a;
        return;
    }
    int b = arr[n - 1];
    if (arr[n - 1] > a)
    {
        insert(arr, n - 1, a);
    }
    else
    {
        arr[n - 1] = a;
    }

    arr[n] = b;
}
void sort(int *arr, int n)
{
    if (n == 1)
        return;
    sort(arr, n - 1);   // it will return the sorted arr to n-1
    int a = arr[n - 1]; // we have resposibilty that we store a at its correct postion
    insert(arr, n - 1, a);
}

int main()
{
    int arr[7] = {0, 0, 0, -7878, 0, 9, -9};
    sort(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}