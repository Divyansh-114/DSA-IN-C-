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
int Size(Node *root){
    int size1=0;
    if(root==NULL)
    return size1;
    size1=1+Size(root->left)+Size(root->Right);
    
}
// int Max(Node* root){
//     int MAX=INT_MIN;
//     if(root==NULL)
//     return MAX;
//     Max(root->left);
//     Max(root->Right);
//     MAX=max(root->val,max(Max(root->left),Max(root->Right)));

// }


bool  balanced(Node* root){
    if(root==NULL)
    return 0;
    int left_height= Size(root->left);
    int right_height=Size(root->Right);
    if((left_height-right_height)>1)
    return false;

    return true;
}

int main(){
Node* a=new Node(1);
Node* b= new Node(2);
Node* c= new Node(3);
Node * d =new Node(4);
Node* e= new Node(5);
a->left=b;
a->Right=c;
c->left=d;
c->Right=e;
cout<<balanced(a);





}