#include <iostream>
using namespace std;

class node
{ // LINKED LIST NODE
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int display(node *a)
{
    node *temp = a;
    int count=0;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
        count++;     
    }
    return count;
}
void deleteNode(node* head,node* target){
    node* temp=head;
    while (temp->next != target)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
}
void DeleteVal(node* head,int target){
    node* temp=head;
    while(temp->next->val != target){
        temp=temp->next;
    }
    temp->next=temp->next->next;
}
int main()
{
    node *a = new node(10);
    node *b = new node(20);
    node *c = new node(30);
    node *d = new node(40);
    node* e=new node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    cout<<"size is: " <<display(a)<<endl;
    // deleteNode(a,e);
    // display(a);
    DeleteVal(a,20);
    display(a);
}