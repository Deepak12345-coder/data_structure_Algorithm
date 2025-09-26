#include <iostream>
using namespace std;

// declare the structure 
struct Node {  
    int data;
    Node* next;
};     

// create linklist insert node at end
void create_linklist(Node* &head,int data)
{
    Node* newnode=new Node();
    newnode->data=data;
    newnode->next=NULL;   

    if(head==NULL)  // if list is empty
    {
        head=newnode;
        return;
    }

    Node* temp=head;
    while(temp->next!=NULL)  // reach last node
    {
        temp=temp->next;
    } 
    temp->next=newnode;
}

void insert_end(Node* &head,int data)
{
    Node* newnode=new Node();
    newnode->data=data;
    newnode->next=NULL; 

    if(head==NULL)  // if list is empty
    {
        head=newnode;
        return;
    }

    Node* temp=head;
    while(temp->next!=NULL)  // reach last node
    {
        temp=temp->next;
    } 
    temp->next=newnode;
}



// insert node at front
void insert_front(Node* &head,int data)
{  
    Node* newnode=new Node();
    newnode->data=data;  

    if(head==NULL)
    {
        head=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}

// insert node at given position
void insert_pos(Node* &head,int data,int position)
{
    Node* newnode=new Node();
    newnode->data=data;
    newnode->next=NULL;

    // insert at head or empty list
    if(head==NULL || position<=1)
    {
        newnode->next=head;
        head=newnode;
        return;
    } 

    Node* temp=head;
    int count=1;

    while(temp!=NULL && count<position-1)
    {
        temp=temp->next;
        count++;
    } 
     if(temp==NULL)
     {
        cout<<" invalid case";
        return ;
          
     }
    // if position is greater than length, just insert at end  or want to handle length+1 greater invalid case then use temp!=NULL;
    newnode->next=temp->next;
    temp->next=newnode;
}
// print linked list
void printlist(Node *head)
{   
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout << endl;
}

int main()
{   
    Node* head=NULL;  
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
       int val;
       cout<<"Enter data for node "<<i+1<<": ";
       cin>>val;
       create_linklist(head,val);   // using push for creation
    }

    cout << "Initial list: ";
    printlist(head);

    insert_front(head,56);
    cout << "After inserting 56 at front: ";
    printlist(head);

    insert_end(head,60);
    cout << "After insert(60) at end: ";
    printlist(head);

    insert_pos(head,70,3);
    cout << "After inserting 70 at position 3: ";
    printlist(head);

    return 0;
}