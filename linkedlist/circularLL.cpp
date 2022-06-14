#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    // distructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};
void insertNode(Node *&tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // assuming that the element is present in the list
        // non empty list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element is found and currr is pointing to the element
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node *&tail)// printing the LL
{
    Node *temp = tail;
    // cout<<tail->data<<" ";

    // while(tail->next!=temp){
    //     cout<<tail->data<<" ";
    //     tail=tail->next;

    // }
    // using do while
    do// khasiyat ek bar to chale gahi 
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}
void deleteNode(Node* tail,int element){
    
    
    Node* curr=tail;
    Node* pre=tail;

    while(curr->data!=element){
       pre=curr;
        curr=curr->next;

    }
   
    pre->next=curr->next;
    curr->next=NULL;
    delete curr;

}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 4);
    insertNode(tail, 4, 6);
    insertNode(tail, 6, 9);
    // insertNode(tail, 3, 8);
    // insertNode(tail, 3, 9);
    // insertNode(tail, 3, 6);

    print(tail);
    deleteNode(tail,3);
    print(tail);
    return 0;
}