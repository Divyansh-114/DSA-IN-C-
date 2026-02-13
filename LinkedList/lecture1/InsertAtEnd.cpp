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

    void InsertAtEnd(int val) {
        node* temp = new node(val); // FIXED

        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
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

    ll.InsertAtEnd(10); // ({10}) ir become the linked list which has value 10
    ll.InsertAtEnd(20);
    ll.InsertAtEnd(30);
    ll.InsertAtEnd(40);
    ll.display();


    return 0;
}
