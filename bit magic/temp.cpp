#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;

    int temp=0;
    int i=0;
    while(x!=0)
    {
        int bit = x & 1;
        temp = (bit*pow(10,i)) + temp;
        //cout<<x<<" "<<i<<" "<<temp<<" "<<bit<<endl;
        x=x>>1;
        i++;  
    }
   
cout<<temp ; 

return 0;
}