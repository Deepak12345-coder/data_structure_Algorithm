#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Create linked list node (same as insert at end)
void create_header_linklist(Node* &head, int data) {
    Node* newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newnode;
}

// Insert at beginning (after header)
void insert_begin(Node* &head, int data) {
    Node* newnode = new Node();
    newnode->data = data;
    newnode->next = head->next;
    head->next = newnode;
}

// Insert at position (0-based after header) — goes to pos - 1
void insert_pos(Node* head, int pos, int data) {
      Node* newnode = new Node();
    newnode->data = data;
    newnode->next=NULL;


    Node* temp = head;
    int count = 0;

    // Go to (pos - 1)
    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        cout << "Insert position out of range";
        return;
    }

    
    newnode->next = temp->next;
    temp->next = newnode;
}

// Delete from beginning (first real node after header)
void delete_begin(Node* &head) {
    if (head->next == NULL) {
        cout << "List is empty, nothing to delete at beginning";
        return;
    }

    Node* temp1= head->next;
    head->next = temp1->next;
    delete temp1;
}

// Delete from end (last real node)
void delete_end(Node* &head) {
    if (head->next == NULL) {
        cout << "List is empty, nothing to delete at en"<<endl;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL && temp->next->next != NULL) {
        temp = temp->next;
    }

    Node* temp1= temp->next;
    temp->next = NULL;
    delete temp1;
}

// Delete at position (0-based after header) — go to pos - 1
void delete_pos(Node* head, int pos) {
    if (head->next == NULL) {
        cout << "List is empty";
        return;
    }

    Node* temp = head;
    int count = 0;

    // Go to (pos - 1)
    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Delete position out of range\n";
        return;
    }

    Node* temp1 = temp->next;
    temp->next = temp1->next;
    delete temp1;
}

// Print the linked list
void print_list(Node* head) {
    Node* temp=head->next;

    while (temp) {
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

int main() {
    Node* header = new Node(); // dummy header
    header->data = 0;
    header->next = NULL;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter " << n << " values:"<<endl;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        create_header_linklist(header, data);
    }

    cout << "Initial List: ";
    print_list(header);

    insert_begin(header, 40);
    cout << "After inserting 40 at beginning: ";
    print_list(header);

    insert_pos(header, 3, 60);  // Insert at position 3 (0-based)
    cout << "After inserting 60 at position 3: ";
    print_list(header);

    delete_begin(header);
    cout << "After deleting from beginning: ";
    print_list(header);

    delete_end(header);
    cout << "After deleting from end: ";
    print_list(header);

    delete_pos(header, 2);  // Delete node at position 2 
    cout << "After deleting node at position 2: ";
    print_list(header);

    return 0;
}
