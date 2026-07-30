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
void level_queue(Node* root){
    queue<Node*> q;
    q.push(root);
   
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left !=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
    }
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

    cout<<endl;
    vector<int>dec;
    inorder(a,dec);
    cout<<" this is before heap "<<endl;
   level_queue(a);
    
    int i=0;
    PREdisplay(a,dec,i); // BST ban gya max heap m
    cout<<" this is after  "<<endl;
   level_queue(a);


   




}
