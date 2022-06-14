#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
// constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }


};

void lasttofront(Node* &head){
if(head==NULL) return;
if(head->next==NULL) return;

Node* temp=head;
Node* pre=NULL;
while(temp->next!=NULL){
    pre=temp;
    temp=temp->next;

}
temp->next=head;
pre->next=NULL;
head=temp;
return ;


}

int main(){

    return 0;
}