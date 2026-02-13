#include<iostream>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int val) {
        this->val = val;
        this->next = NULL;  
    }
};

class LinkedList {
public:
    int size;
    node* head;
    node* tail;

    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    void InsertAtBegin(int val) {
        node* temp = new node(val); // FIXED

        if (size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head=temp;
        }
        size++;
    }

    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll; //{} empty linked list 

    ll.InsertAtBegin(10); //insert linked list at the beginning of the list 
    ll.InsertAtBegin(20);
    ll.InsertAtBegin(30);
    ll.InsertAtBegin(40);
    ll.display();
 

    return 0;
}
