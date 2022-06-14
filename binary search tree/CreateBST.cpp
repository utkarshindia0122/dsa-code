#include<iostream>
using namespace std;

class Node {
public: 
int data ;
Node* left;
Node* right;
//constructor
Node(int d){
this->data=d;
this->left=NULL;
this->right=NULL;

}



};

Node* insertInBST(Node* root,int data){
if(root==NULL){
Node* temp=new Node(data);
return temp;

}

if(root->data>=data){
    //left mein insert karna h
root->left=insertInBST(root->left,data);

}
else if(root->data<data){
    // right mein insert karna h
    root->right=insertInBST(root->right,data);
}



}

void takeInput(Node* &root){
int data;
cin>>data;
while(data!=-1){
    root=insertInBST(root,data);
    cin>>data;
}

}




int main(){
Node* root=NULL;
cout<<"enter the data to create BST"<<endl;
takeInput(root);


    return 0;
}
