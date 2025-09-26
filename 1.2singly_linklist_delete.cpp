#include<iostream>
using namespace std;

struct Node{
     int data;
     Node* next;
};    

void create_linklist(Node* &head,int key )
{
     Node* newnode=new Node();
     newnode->data=key;
     newnode->next=NULL;

     if(head==NULL) {
        head=newnode;
        return;
     }  

     Node* temp=head;
     while(temp->next!=NULL)
         temp=temp->next;
     
     temp->next=newnode;
}  

void delete_front(Node* &head)
{
    if(head==NULL) {
        cout<<"Linked list is empty";
        return;
    }   
    Node* temp=head;
    head=head->next;
    delete temp;
}  

void delete_end(Node* &head)
{
    if(head==NULL) {
        cout<<"Linked list is empty";
        return;
    } 

    if(head->next==NULL) {
        Node* temp1=head;
        head=NULL;
        delete temp1;
        return;
    }  

    Node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }      
   
    Node* temp2=temp->next;
    temp->next=NULL;
    delete temp2;
}

void delete_pos(Node* &head,int position)
{   
    if(head==NULL) {
        cout<<"Linked list is empty";
        return;
    } 

    if(position==1) {
        Node* temp1=head;
        head=head->next;
        delete temp1;
        return;
    }   

    Node* temp=head;
    int count=1;
    while(temp!=NULL && count<position-1) {
        temp=temp->next;
        count++;
    }

    if(temp==NULL || temp->next==NULL) {
        cout<<"Invalid position"<<endl;
        return;
    }  

    Node* nodeToDelete=temp->next;
    temp->next=temp->next->next;
    delete nodeToDelete;
}

void printlist(Node* head)
{
    while(head!=NULL) {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n; 

    Node* head=NULL;

    for(int i=0;i<n;i++) {
        int key;
        cout<<"Enter the value of node "<< i+1 <<": ";
        cin>>key;
        create_linklist(head,key);
    } 

    cout<<"\nInitial list: ";
    printlist(head);

    delete_front(head);
    cout<<"\nAfter deleting front: ";
    printlist(head);

    delete_end(head);
    cout<<"\nAfter deleting end: ";
    printlist(head);

    delete_pos(head,3);
    cout<<"\nAfter deleting at position 3: ";
    printlist(head);

    return 0;
}