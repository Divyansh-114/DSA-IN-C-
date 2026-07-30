#include<iostream>
#include<climits>
#include<queue>
#include<stack>
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
void preorder(Node* root){
    stack<Node*> s;
    Node* temp;
    s.push(root);
    while(s.size()>0){
        temp=s.top();
        s.pop();
        cout<<temp->val<<" ";
        if(temp->Right)
        s.push(temp->Right);
        if(temp->left)
        s.push(temp->left);
    }

}
void inorder(Node* root){
    
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

    preorder(a);

    
}