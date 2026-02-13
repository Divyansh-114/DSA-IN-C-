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
    void InsertAtIndex(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"invalid case";
            return;
        }
        else if(idx==0)
         InsertAtBegin(val);
         else if(idx==size)
         InsertAtEnd( val);
         else{
            node* t= new node(val);
            node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t; 
            size++;
         }

    }


    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void DeleteAtHead(){
        if(size==0){
        cout<<"list is empty";
        return;
        }
        head=head->next;
        size--;
    }
    void DeleteAtTail(){
        node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
        
    }
    void  DeleteIdx(int idx){
        if(idx==0){
            DeleteAtHead();
            return;
        }
        if(idx==size-1){
            DeleteAtTail();
        }
        if(idx<0 || idx>size){
            cout<<"invlaid deletion";
        }
        else{
        node* temp=head;
        for(int i=0;i<idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
        
    }
};

int main() {
    LinkedList ll;        //{} empty linked list 

   ll.InsertAtEnd(10);
   ll.InsertAtEnd(20);
   ll.InsertAtEnd(30);
   // this is insert at any index
   ll.InsertAtIndex(1,50);
//    ll.display();
//    // this is deletion at head 
//    ll.DeleteAtHead();
//    ll.display();
//    ll.DeleteAtHead();
//    ll.display();
   // this is deletion at tail
//    ll.DeleteAtTail();
   ll.display();
   ll.DeleteIdx(1);
   ll.display();

    return 0;
}
 