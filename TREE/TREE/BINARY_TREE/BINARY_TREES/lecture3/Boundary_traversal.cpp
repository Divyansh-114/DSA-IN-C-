#include<iostream>
#include<climits>
#include<queue>
#include<algorithm>
#include<stack>
using namespace std;


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
void leaf_node(Node* root){
    if(root==NULL)
    return;
    if(root->left==NULL && root->Right==NULL)
    cout<<root->val<<" ";
    leaf_node(root->left);
    leaf_node(root->Right);
}
void left_traversal(Node* root){
    if(root->left==NULL)
    return;
    cout<<root->val<<" ";
      left_traversal(root->left);
}
void Right_traversal(Node* root){
    if(root->Right==NULL)
    return;
    Right_traversal(root->Right);
     cout<<root->val<<" ";
}
void boundary_traversal(Node* root){
    left_traversal(root);
    leaf_node(root);
    Right_traversal(root->Right);

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
    boundary_traversal(a);

    
}