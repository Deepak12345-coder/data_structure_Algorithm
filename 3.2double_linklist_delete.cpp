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

void delete_front(Node* &head,Node* &tail)
{
      if(head==NULL)
      {
        cout<<" linklist is empty:";
        return ;

      }
    
      // single node 

      if(head->next==NULL)
      {

         Node* temp=head;
         head=NULL;
         tail=NULL;
         delete temp;
         return;
     } 

      Node* temp1=head;
      head=head->next;
      head->prev=NULL;
      delete temp1;
}
void delete_end(Node*&head,Node* &tail)
{
          if(head==NULL)
          {
             cout<<" linklist is empty";
             return ;

          } 
          // single node ;

          if(head->next==NULL)
          {  
            Node* temp=head;
            head=NULL;
            tail=NULL;
            delete temp;
            return ;


          } 

          // 
          Node* temp1=tail;
          tail=tail->prev;
          tail->next=NULL;
          delete temp1;

}

void delete_pos(Node* &head, Node* &tail, int position) {
    if (head == NULL) {
        cout << "Linked list is empty\n";
        return;
    }

    // case 1: delete first node
    if (position == 1) {
        delete_front(head, tail);
        return;
    }

    Node* temp = head;
    int count = 1;

    // move to position-1
    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }

    // invalid position
    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position";
        return;
    }

    // case 2: delete last node
    if (temp->next == tail) {
        delete_end(head, tail);
        return;
    }

    // case 3: delete middle node
    Node* delNode = temp->next;
    temp->next = delNode->next;
    delNode->next->prev = temp;
    delete delNode;
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
    delete_front(head,tail);
    print_forward(head);
    print_backward(tail);

    cout <<endl;

    delete_end(head,tail);
    print_forward(head);
    print_backward(tail);


   
   cout<<endl;

    delete_pos(head,tail,3);
    print_forward(head);
    print_backward(tail);

    return 0;

}