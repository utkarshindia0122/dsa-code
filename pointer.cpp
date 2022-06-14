// #include<iostream>
// using namespace std;
// int main(){
// // int arr[10]={0,1,9,5,6,9};


// // cout<<arr<<endl;
// // cout<<&arr[0]<<endl;
// // cout<<*arr<<endl;
// // cout<<*arr+1<<endl;
// // cout<<*(arr+1)<<endl;

// // cout<<4[arr];//equal to arr[4];
// // cout<<*(arr+4);

// char st[]="ABCD";

// int i=0;
// cout<<(*st)+i;




//     return 0;

// }

#include<iostream>
using namespace std;
void swap (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}

int main()
{
   char *x = "geeksquiz";
   char *y = "geeksforgeeks";
   char *t;
   swap(x, y);
   cout<<x << " "<<y;
   t = x;
   x = y;
   y = t; 
   cout<<" "<<x<< " "<<y;
   return 0;
}