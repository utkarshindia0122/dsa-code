#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // distructor
    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insertAtHead(Node *&head, int d)
{ // inserting at head
    /// created a new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{ // we are pasing the address because we don't want to crate a copy of node
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtmiddle(Node *&head, Node *&tail, int i, int d)
{ // inserting at middle
    if (i == 1)
    { // condition if we want to insert at position 1
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < i - 1)
    { // terversing the linkedlist to ith position
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {                          // if temp is pointing to null that means it is last node
        insertAtTail(tail, d); // we will call the insertAtTail function
        return;
    }

    Node *middle = new Node(d); // if it is middle element then we are pointing the new middle node to where temp->next is pointing and then updating the temp->next to middle
    middle->next = temp->next;
    temp->next = middle;
}

void print(Node *&head)
{ // print the linked list or tervesing the linkedlist
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deleteNode(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    { // if it is head to delete
        Node *temp = head;
        head = head->next;
        temp->next = NULL; // it is nesseary beacase if it is not here then it will delete all the node after it
        delete temp;
    }
    else
    {
        Node *curr = head; // current pointer
        Node *prev = NULL; // prev pointer
        int count = 1;
        while (count < position)
        {
            prev = curr;       // updating the prev pointer to current
            curr = curr->next; // updating the next pointer to next node
            count++;
        }
        
        if (curr->next == NULL){
       
            tail = prev;
            
            // for handling the tail pointer is we are are last element
        }

        prev->next = curr->next; // pointing prev node to current node
        curr->next = NULL;       // null before freeing the space
        delete curr;
        
        
    }
}

void lasttofront(Node* &head){// question no. 146 from DSA
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

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
   insertAtHead(head, 15);
    //print(head);
    insertAtHead(head, 89);
    // print(head);
    insertAtHead(head, 90);
    // print(head);

    insertAtTail(tail, 1);
    // print(head);
    insertAtTail(tail, 4);
    // print(head);
    insertAtTail(tail, 6);
    // print(head);
    insertAtmiddle(head, tail, 8, 16);
    print(head);
    deleteNode(head, tail, 8);
    print(head);
    cout<<"*"<<endl;
   // cout << head->data << endl;
    //cout << tail->data << endl;
    lasttofront(head);
    print(head);
}