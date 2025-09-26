#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Initialize circular linked list with header node
Node* create_header() {
    Node* header = new Node();
    header->data = 0;  // dummy data
    header->next = header; // circular to itself
    return header;
}

// Insert at beginning (after header)
void insert_begin(Node* header, int data) {
    Node* newnode = new Node();
    newnode->data = data;
    newnode->next = header->next;
    header->next = newnode;
}

// Insert at end (before header)
void insert_end(Node* header, int data) {
    Node* newnode = new Node();
    newnode->data = data;
    newnode->next = header;

    Node* temp = header;
    while (temp->next != header) {
        temp = temp->next;
    }
    temp->next = newnode;
}

// Insert at position (0-based, position 0 means after header)
void insert_pos(Node* head, int pos, int data) {
    if (pos < 0) {
        cout << "Invalid position" << endl;
        return;
    }

    Node* newnode = new Node();
    newnode->data = data;
    newnode->next = nullptr;

    Node* temp = head;
    int count = 0;

    // Traverse to (pos - 1)th node or end of list (NULL)
    while (count < pos - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL ) {
        cout << "Insert position out of range" << endl;
        delete newnode;
        return;
    }

    // Insert node
    newnode->next = temp->next;
    temp->next = newnode;
}

// Delete node at end (last real node)
void delete_end(Node* header) {
    if (header->next == header) {
        cout << "List is empty";
        return;
    }

    Node* temp = header;
    while (temp->next->next != header) {
        temp = temp->next;
    }

    Node* to_delete = temp->next;
    temp->next = header;
    delete to_delete;
}

// Delete node at position (0-based)
void delete_pos(Node* head, int pos) {
    if (head->next == NULL) {
        cout << "List is empty";
        return;
    }

    // if (pos <= 0) {
    //     cout << "Cannot delete head or invalid position";
    //     return;
    // }

    Node* temp = head;
    int count = 0;

    // Traverse to node before the one to delete (pos - 1)
    while (count < pos - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    // Check if position is valid
    if (temp == NULL || temp->next == NULL) {
        cout << "Delete position out of range";
        return;
    }

    Node* to_delete = temp->next;
    temp->next = to_delete->next;
    delete to_delete;
}

// Print circular list starting from first real node
void print_list(Node* header) {
    if (header->next == header) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = header->next;
    while (temp != header) {
        cout << te  mp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* header = create_header();

    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        insert_end(header, data);
    }

    print_list(header);  // Initial list

    insert_begin(header, 5);
    print_list(header);  // After inserting 5 at beginning

    insert_pos(header, 2, 15);  // Insert 15 at position 2 (0-based)
    print_list(header);

    delete_begin(header);
    print_list(header);  // After deleting from beginning

    delete_end(header);
    print_list(header);  // After deleting from end

    delete_pos(header, 1);  // Delete at position 1
    print_list(header);     // Final list

    return 0;
}