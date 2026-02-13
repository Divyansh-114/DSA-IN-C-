#include<iostream>
using namespace std;
class stack{
    public:
    int val;
    stack* next;
    stack(int val){
        this->val=val;
        next=NULL;
    }   
    void push(stack* &head,int val){
        stack* newnode=new stack(val);
        if(head==NULL){
            head=newnode;
            return;
        }
        newnode->next=head;
        head=newnode;
    }
    void pop(stack* &head){
        if(head==NULL){
            cout<<"stack underflow"<<endl;
            return;
        }
        stack* temp=head;
        head=head->next;
        delete temp;
    }
};
int main(){
    stack* head=NULL;
    head->push(head,1);
    head->push(head,2);
    head->push(head,3);
    head->push(head,4);
    while(head!=NULL){
        cout<<head->val<<" ";
        head->pop(head);
    }
}