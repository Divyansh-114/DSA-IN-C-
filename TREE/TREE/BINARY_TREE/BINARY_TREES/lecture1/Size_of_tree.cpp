#include<iostream>
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
int balanced(Node* root){
    if(root==NULL)
    return 0;
    int left_height= Size(root->left);
    int right_height=Size(root->Right);

    return abs(left_height-right_height);
}

int main(){

    Node* a= new Node(1); // this is our root 
    Node* b= new Node(2);
    Node* c= new Node(3);
    // Node* d= new Node(4);
    // Node* e= new Node(5);
    // Node* f= new Node(6);
    // Node* g= new Node(8);
    
    a->left=b;
    a->Right=c;
    // b->left=d;
    // b->Right=e;
    // c->left=f;
    // c->Right=g;

   // this tree is only till here  

    // d->Right=NULL;
    // d->left=NULL;
    // e->left=NULL;
    // f->left=NULL;
    // f->Right=NULL;
    // g->left=NULL;
    // g->Right=NULL;
    // int size=Size(a);
    // cout<<size;
 int   balance=balanced(a);
 cout<<balanced;



}