#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class CircularLinkedList {
private:
    Node* head;
    
public:
    CircularLinkedList() {
        this->head = NULL;
    }
    
    void add_front(int data) {
        Node* new_node = new Node(data);
        if (this->head == NULL) {
            this->head = new_node;
            new_node->next = new_node;
            return;
        }
        Node* curr = this->head;
        while (curr->next != this->head) {
            curr = curr->next;
        }
        curr->next = new_node;
        new_node->next = this->head;
        this->head = new_node;
    }
    
    void add_end(int data) {
        Node* new_node = new Node(data);
        if (this->head == NULL) {
            this->head = new_node;
            new_node->next = new_node;
            return;
        }
        Node* curr = this->head;
        while (curr->next != this->head) {
            curr = curr->next;
        }
        curr->next = new_node;
        new_node->next = this->head;
    }
    
    void print() {
        if (this->head == NULL) {
            return;
        }
        Node* curr = this->head;
        do {
            cout << curr->data << " ";
            curr = curr->next;
        } while (curr != this->head);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;
    cll.add_front(3);
    cll.add_front(2);
    cll.add_front(1);
    cll.add_end(4);
    cll.add_end(5);
    cll.print();
    return 0;
}


