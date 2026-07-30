#include<iostream>
#include<climits>
#include<algorithm>
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

void PREdisplay(Node* root){
    if(root==NULL)
    return;
    cout<<root->val<<" ";
    PREdisplay(root->left);
    PREdisplay(root->Right);
      
}
void INdisplay(Node* root){
    if(root==NULL)
    return;
    INdisplay(root->left);
    cout<<root->val<<" ";
    INdisplay(root->Right);
      
}
void POSTdisplay(Node* root){
    if(root==NULL)
    return;
    POSTdisplay(root->left);
    POSTdisplay(root->Right);
    cout<<root->val<<" ";
      
}
int Sum(Node* root){
    int sum=0;
    if(root==NULL)
    return 0;
    sum=root->val+Sum(root->left)+Sum(root->Right);

}
int Size(Node *root){
    int size1=0;
    if(root==NULL)
    return size1;
    size1=1+Size(root->left)+Size(root->Right);
    
}
int Max(Node* root){
    int MAX=INT_MIN;
    if(root==NULL)
    return MAX;
    Max(root->left);
    Max(root->Right);
    MAX=max(root->val,max(Max(root->left),Max(root->Right)));

}
int product(Node* root){
    if(root==NULL)
    return 1;
    return ((root->val)*product(root->left)*product(root->Right));
}
int Min(Node* root){
    if(root==NULL)
    return INT_MAX;
    return min(root->val,min(Min(root->left),Min(root->Right)));
}
int level(Node* root){
    if(root==NULL)
    return 0;
    return 1+ max(level(root->left),level(root->Right));
}
int height(Node* root){
    return level(root)-1;
}


int main(){

    Node* a= new Node(1); // this is our root 
    Node* b= new Node(2);
    Node* c= new Node(3);
    Node* d= new Node(9 );
    Node* e= new Node(5);
    Node* f= new Node(6);
    Node* g= new Node(8);
    
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
    cout<<level(a);
    cout<<height(a);





}