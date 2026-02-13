#include<iostream>
using namespace std;
class  Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
int main(){
    // 10 20 
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;
    a->prev=NULL;
    b->prev=a;
    c->prev=b;
    d->prev=c;
     
    Node* temp=a;
    while(temp!=NULL){
        cout<< temp->val;
        temp=temp->next;
    }
    cout<<endl;
    Node* tail=d;
    while(tail!=NULL){
        cout<<" "<<tail->val;
        tail=tail->prev;
    }




}

 