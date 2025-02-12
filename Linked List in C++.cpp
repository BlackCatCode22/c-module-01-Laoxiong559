#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the list
void insertAtEnd(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (head == nullptr) {  // If the list is empty, make newNode the head
        head = newNode;
        return;
    }

    Node* last = head;  // Traverse to the last node
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = newNode;  // Attach the new node at the end
}

// Function to display the list
void displayList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;  // Initialize an empty linked list

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);

    cout << "Linked List: ";
    displayList(head);

    return 0;
}
