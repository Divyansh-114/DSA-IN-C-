#include<iostream>
using namespace std;

class node{     // LINKED LIST NODE 
    public:
    int val;
    node* next;  
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
        // 10 20 30 40 
    node a(10);
    node b(20);
    node c(30); 
    node d(40);
        // forming linked list;
    a.next=&b;
    b.next=&c;
    c.next=&d;  
    d.next=NULL;
    a.next->val=70;
        // a.next se b p aae fir next se c p aae fir next se d p aa gye 
        // cout<<"  THIS IS THE VALUE "<<(((a.next)->next)->next)->val;
        // by using for loop
    node temp=a;
    while(1){
        cout<<temp.val<<"  ";
        if(temp.next==NULL)
        break;
        temp = *(temp.next);
    }


}