#include<iostream>
using namespace std;
int main(){
    int rs;
    cin>> rs;
    int remain=rs,coco=rs;
    for(int i=0;i<=remain;i++){
remain/=3;
coco+=remain;


    } 
    if(remain>=3)
   { coco+=1;
   }
    
    cout<<coco;
    return 0;

}
// int main(){
//     int rs;
//     cin>>rs;
//     int t_coco,n_wrap,o_wrap=0,coco=0;
//     t_coco=n_wrap=rs;

//     while((n_wrap+o_wrap)>=3){
//         coco=coco+((n_wrap+o_wrap)/3);
// o_wrap=
//     }
// }