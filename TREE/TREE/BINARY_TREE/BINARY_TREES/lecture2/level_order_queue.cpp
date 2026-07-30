#include<iostream>
#include<queue>
using namespace std;
// this is Tree class 
class Node{
    public:
    int val;
    Node* left;
    Node* Right;
    // this is our constructor
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->Right=NULL;
    }    
};



void level_queue(Node* root){
    queue<Node*> q;
    q.push(root);
    cout<<"THIS IS LEVEL ORDER TRAVERSAL";
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left !=NULL)
        q.push(temp->left);
        if(temp->Right!=NULL)
        q.push(temp->Right);
    }
}
void level_queue_REVERSE(Node* root){
    queue<Node*> q;
    q.push(root);
    cout<<"THIS IS LEVEL ORDER TRAVERSAL";
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->Right!=NULL)
        q.push(temp->Right);
        if(temp->left !=NULL)
        q.push(temp->left);
        
    }
}

int main(){

    Node* a= new Node(1); // this is our root 
    Node* b= new Node(2);
    Node* c= new Node(3);
    Node* d= new Node(4);
    Node* e= new Node(5);
    Node* f= new Node(6);
    Node* g= new Node(7);
    a->left=b;
    a->Right=c;
    b->left=d;
    b->Right=e;
    c->left=f;
    c->Right=g;

   // this tree is only till here  

    d->Right=NULL;
    d->left=NULL;
    e->left=NULL;
    f->left=NULL;
    f->Right=NULL;
    g->left=NULL;
    g->Right=NULL;
    // display tree 
    // cout<< " THIS WILL GIVES US PRE ORDER ";
    // PREdisplay(a);
    // cout<<endl;
    // cout<<" THIS WILL GIVES US IN ORDER ";
    // INdisplay(a);
    // cout<<endl;
    // cout<<" THIS WILL GIVE US POST ORDER ";
    // POSTdisplay(a);
    level_queue(a); 
    cout<<endl;
    level_queue_REVERSE(a);
}