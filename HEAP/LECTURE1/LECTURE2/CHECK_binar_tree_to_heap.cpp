#include <iostream>
#include <vector>
#include<queue>
using namespace std;

// Tree Node Definition
struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }

      

};
    void PREdisplay(Node* root,vector<int>&dec,int &i){
    if(root==NULL)
    return;
    root->val=dec[i++];
    PREdisplay(root->left,dec,i);
    PREdisplay(root->right,dec,i);
    }
void inorder(Node* root,vector<int>&dec){
    if(root==NULL)
    return;
    inorder(root->right,dec);
    dec.push_back(root->val);
    inorder(root->left,dec);
    
}
int Size(Node *root){
    int size1=0;
    if(root==NULL)
    return size1;
    size1=1+Size(root->left)+Size(root->right);
    
}


bool level_queue(Node* root){
    queue<Node*> q;
    q.push(root);
    int size = Size(root);
    int count=0;
   
    while(count<size){
        Node* temp = q.front();
        q.pop();
        count++;     
        
        if(temp!=NULL){
            q.push(temp->left);
            q.push(temp->right);
    }
    }
    if(q.size()>0){
        Node* temp = q.front();
        if(temp!=NULL)
        return false;
        q.pop();
}
return true;

}
bool isHEAP(Node*root){
    if(root==NULL)
    return true;
    if(root->left && root->val < root->left->val)
    return false;

    if(root->right && root->val < root->right->val)
    return false;


    return isHEAP(root->left) && isHEAP(root->right); 
}
int main(){
    Node* a= new Node(10); // this is our root 
    Node* b= new Node(5);
    Node* c= new Node(16);
    Node* d= new Node(1);
    Node* e= new Node(8);
    Node* f= new Node(12);
    Node* g= new Node(20);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    if(isHEAP(a) && level_queue(a) )
    cout<<"tree is maxheap";
    
  

   




}
