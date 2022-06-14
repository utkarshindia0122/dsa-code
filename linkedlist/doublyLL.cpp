#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    //distructor
    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void print(Node *&head) // printing LL
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void printrev(Node *&tail) // printing LL in Revese order
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int length(Node *&head) // finding length of LL
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void insertAthead(Node *&head, Node *&tail, int d) // inserting at head of from front
{                                                  // inserting at head

    if (head == NULL) // if head is null means we have not created LL ,,, if node is not declare in main function
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAttail(Node *&head, Node *&tail, int d) // insert at tail,, from end
{
    if (tail == NULL) // tail is null it means that LL is not created,,, if node is not declare in main function
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtposition(Node *&head, Node *&tail, int index, int d)// at any position
{
    if (index == 1)
    { // inserting at start
        insertAthead(head,tail, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < index - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {// inserting at end
        insertAttail(head,tail, d);
        return;
    }
    Node *middle = new Node(d);// inserting at any index
    middle->next = temp->next; // step 1
    temp->next = middle;       // step 2
    middle->prev = temp;       // step 3

    temp = temp->next;// temp ko aage wale LL pe le jane ke liye
    temp = temp->next;// temp ko aage wale LL pe le jane ke liye
    temp->prev = middle; // step 4
}
 void deleteNode(Node*&head,Node*&tail,int index){
if(index==1){
    Node* tempnext=head;
    Node* temp=head;
    tempnext=tempnext->next;
    temp->next=NULL;
    temp->prev=NULL;
    head=tempnext;
    delete temp;
}
int count=0;
Node* curr=head;
Node* pre=NULL;
while(count<index){
pre=curr;
curr=curr->next;

count++;
}
if(curr->next==NULL){
    tail=pre;
}

pre->next=curr->next;
curr->prev=NULL;
curr->next->prev=pre;
curr->next=NULL;


delete curr;



 }

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    cout << length(head) << endl;
    insertAthead(head, tail, 8);
    insertAthead(head, tail, 44);
    insertAthead(head, tail, 6);
    insertAthead(head, tail, 9);

    print(head);

    printrev(tail);

    insertAttail(head, tail, 7);
    print(head);
    cout << length(head) << endl;

   insertAtposition(head, tail, 6, 9);
    print(head);
   // printrev(tail);
deleteNode(head,tail,6);
cout<<" *"<<endl;
print(head);
cout<<head->data<<endl;
cout<<tail->data;
    return 0;
}
