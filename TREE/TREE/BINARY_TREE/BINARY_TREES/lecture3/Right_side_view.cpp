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
int level(Node* root){
    if(root==NULL)
    return 0;
    return 1+ max(level(root->left),level(root->Right));
}
void Right_traversal(Node* root){
    if(root->Right==NULL)
    return;
    Right_traversal(root->Right);
     cout<<root->val<<" ";
}
 void  left_side_view(Node* root,vector<int>&ans,int curr){
    if(root==NULL)
    return;
    ans[curr]=root->val;
    left_side_view(root->Right,ans,curr+1);
    left_side_view(root->left,ans,curr+1);

 }
 void  right_side_view(Node* root,vector<int>&ans,int curr){
    if(root==NULL)
    return;
    ans[curr]=root->val;
    left_side_view(root->left,ans,curr+1);
    left_side_view(root->Right,ans,curr+1);

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

    vector<int>ans(level(a),0);
    right_side_view(a,ans,0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}