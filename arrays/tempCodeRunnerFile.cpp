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