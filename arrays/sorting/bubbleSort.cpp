#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)// our array is sorting backwords because of this we are using i<n-1
    {
        for (int j = 0; j < n-1 - i; j++)// our array is sorting backwords because of this we are using j<n-i
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}