#include<iostream>
using namespace std;
struct Node{ 
   Node* prev;
   int data;
   Node* next;
          
     Node(int val)
     {
        data=val;
        prev=NULL;
        next=NULL;
  }
    }; 
void create_doubly_linklist(Node* &head,Node* &tail,int data)
{
        // create a node of data value 
        Node* newnode=new Node(data);

        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return ;



        }

        // insert at end we node  
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;




}  
void print_forward(Node* head)
{
   cout<<"forward list :";
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;

    }
    
}
void print_backward(Node* tail)
{   cout<<" bakward list ";
    while(tail!=NULL)
    {
        cout<<tail->data<<" ";
        tail=tail->prev;
    }
} 
void insert_front(Node* &head,Node* & tail,int data)
{
    // create node 
    Node* newnode= new Node(data);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;

    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;



}
void insert_end(Node* &head ,Node* & tail,int data)
{
      // create a node of data value 
        Node* newnode=new Node(data);

        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return ;



        }

        // insert at end we node  
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;


} 
void insert_pos(Node* &head, Node* &tail, int data, int position) {
    Node* newnode = new Node(data);

    // Case 1: Empty list + insert at 1
    if (head == NULL && position == 1) {
        head = tail = newnode;
        return;
    }

    // Insert at head
    if (position == 1) {
        newnode->next = head;
        if (head != NULL) {
            head->prev = newnode;
        }
        head = newnode;
        return;
    }

    Node* temp = head;
    int count = 1;

    // Move till position-1 or until temp becomes NULL
    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }

    // If temp is NULL, position is invalid
    if (temp == NULL) {
        std::cout << "Invalid position" << std::endl;
        delete newnode;    // avoid memory leak
        return;
    }

    // Insert at tail
    if (temp->next == NULL) {
        temp->next = newnode;
        newnode->prev = temp;
        tail = newnode;
        return;
    }

    // Insert in middle
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next->prev = newnode;
    temp->next = newnode;
}

int main()
{   
    // Node* newnode=new Node(40);
    // cout<<newnode->data;
    Node* head=NULL;
    Node* tail=NULL;

// no of node 
  int n;
  cout<<" enter the no of nodes";
  cin>>n;
  for(int i=0;i<n;i++)
  {

       int data;
       cout<<" enter the data value ";
       cin>>data;
       create_doubly_linklist(head,tail,data);
  }
    print_forward(head);
    cout<<endl;
    print_backward(tail);

    cout<<endl;
    insert_front(head,tail,40);
    print_forward(head);
    print_backward(tail);

    cout<<endl;
    insert_pos(head,tail,30,3);
    print_forward(head);
    print_backward(tail);

    return 0;

}