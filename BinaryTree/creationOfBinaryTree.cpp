#include<iostream>
using namespace std;
class node{
public:
int data;
node* left;
node* right;
//constuctor
node(int d){
this->data=d;
this->left=NULL;
this->right=NULL;

}



};

node* buildTree(node *root){
cout<<"enter the data"<<endl;
int data;
cin>>data;
root=new node(data);
if(data==-1){
    return NULL;
}
cout<<"enter data for inserting in left of "<<data<<endl;
root->left=buildTree(root->left);
cout<<"enter data for inserting in right of "<<data<<endl;
root->right=buildTree(root->right);
return root;
}

void inorder(node* root){//// inorder LNR
if(root==NULL) return;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);


}

void preorder(node* root){///// preorder NLR
if(root==NULL) return;

cout<<root->data<<" ";
preorder(root->left);

preorder(root->right);


}

void postorder(node* root){/////// postorder LRN
if(root==NULL) return;


postorder(root->left);

postorder(root->right);
cout<<root->data<<" ";

}
int main(){

node* root=NULL;

root=buildTree(root);


cout<<"inorder ";
inorder(root);
cout<<endl;
cout<<"preorder ";
preorder(root);
cout<<endl;
cout<<"postorder ";
postorder(root);
    return 0;
}
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 